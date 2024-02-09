/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_B.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:25 by Laubry            #+#    #+#             */
/*   Updated: 2023/12/17 00:47:11 by Laubry           ###   ########.fr       */
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


size_t find_max_size(t_list *stack)
{
	size_t max;
	t_list *second;
	second = stack;

	max = 0;
	while (second)
	{
		if(second->content > max)
			max = second->content;
		second = second->next;
	}
	return 
	max; // return ladresse de max
}
int find_size_stack(t_list *stack) 
{
	t_list *second;
	int i;
	
	second = NULL;
	second = stack;
	i = 0;
	while(second->next)
	{
		second = second->next;
		i++;
	}
	return (i);
}

//push dans b tout sauf le max 
void transit_b(t_list *stack_a, t_list *stack_b)
{
	size_t max;
	size_t i;

	max = find_max_size(stack_a);
	i = find_size_stack(stack_a);
	while(i > 3)
	{
		if(stack_a->content == max)
			stack_a = stack_a->next;
		push(&stack_a, &stack_b, 'b');
		i--;
		stack_a = stack_a->next;
	}
}


///trier a pour metre le plus grand en bas

void tri_a(t_list *stack_a, t_list *stack_b)
{
	size_t max;
	max = find_max_size(stack_a);
	if (stack_a->content == max)
		rotate(&stack_a, 'a');
	else if (stack_a->next->content == max)
		reverse_rotate(&stack_a, 'a');
	if (stack_a->content > stack_b->next->content)
		swap(&stack_a, 'a');	
}