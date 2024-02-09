/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_B.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:25 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/27 19:43:43 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
je fais quoi ??

: 

metre tout dans b sauf 3 dont le plus grand
tri a plus grand en BAS
tant que b contien des truc calculer prix et mouve 


Prix :
Est-ce que moitie haute ?
	-> Oui : prix = index
	-> Non : prix = Taille - index

Ajouter au prix le prix de la target :
Est-ce que meme moitie :
	-> Oui : prix += diff(price A, price B)
	-> Non : prix += prix A


*/




//metre tout dans b sauf 3 dont le plus grand


long find_max_size(t_list *stack)
{
	long max;
	t_list *second;
	second = stack;

	max = 0;
	while (second)
	{
		if(second->content > max)
		{
			max = second->content;
			second = second->next;
		}
		else
			second = second->next;
	}
	// printf("%s %zu\n", "max =", max);
	return (max);
}

int find_size_stack(t_list *stack)
{
	t_list *second;
	int i;
	i = 0;

	second = stack;
	while(second)
	{
		second = second->next;
		i++;
	}
	// printf("%s %d\n", "taille de stack =", i);
	return (i);
}

void transit_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_b;
	long	max;

	first_b = *stack_b;
	max = find_max_size(*stack_a);
	while (find_size_stack(*stack_a) > 3)
	{
		if ((*stack_a)->content != max)
		{
			push(stack_b, stack_a, 'b');
		}
		else
		{
			rotate(stack_a, 'a', 0);
		}
	}
}


///trier a pour metre le plus grand en bas
void tri_a(t_list **head)
{
	long	max;

	max = find_max_size(*head);
	if ((*head)->content == max)
	{
		rotate(&(*head), 'a', 0);
	}
	if ((*head)->next->content == max)
	{
		reverse_rotate(&(*head), 'a', 0);
	}
	if ((*head)->content > (*head)->next->content)
	{
 		swap(&(*head), 'a');
	}
}