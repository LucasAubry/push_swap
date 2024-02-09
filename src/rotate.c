/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:44 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/27 18:41:06 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_list **head, char name, int c)
{
	t_list *last;

	if(!*head)
		return ;
	last = ft_lstlast(*head);
	last->next = *head;
	*head = (*head)->next;
	last->next->next = NULL;
	if (c == 0)
		ft_printf("r%c\n", name);
}
//decale tout dune case le premier element devient le dernier

/*ft_lstadd_front 
c une fonction qui cree un nouveaux maillon au debut 
de ma list chaiee*/