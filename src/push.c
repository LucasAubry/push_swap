/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:37 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/14 18:21:11 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void push (t_list **head_a, t_list **head_b, char name)
// {
// 	if (!(*head_a))
// 		return ;
// 	if (!(*head_b))
// 		ft_lstadd_back(head_b, *head_a);
// 	ft_lstadd_front(head_a, *head_b);
// 	*head_a = (*head_a)->next;
// 	ft_printf("p%c\n", name);
// }

/*
qund on va appeler cette fonction s on veux pa on met a dans head_a
et b dans Head_b en locurance si on veux push_b on va inverser 
comme ca ca push mais ivrse et name c pour dire si c a ou b 
pour que ca print pa ou pb  
ft_lstadd_front 
c une fonction qui cree un nouveaux maillon au debut 
de ma list chaiee*/

void push(t_list **head_a, t_list **head_b, char name)
{
	t_list	*first_b;

	first_b = *head_b;
	if (!first_b)
		return ;
	*head_b = first_b->next;
	ft_lstadd_front(head_a, first_b);
	ft_printf("p%c\n", name);
}