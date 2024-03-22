/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:30:52 by Laubry            #+#    #+#             */
/*   Updated: 2024/03/21 18:59:27 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	on_max(t_list **stack_a, t_list **stack_b)
{
	long	max;
	long	place;

	place = find_place_max(*stack_a);
	max = find_max_size(*stack_a);
	while ((*stack_a)->content != max)
	{
		if (place < find_size_stack(*stack_a) / 2)
			rotate(stack_a, 'a', 0);
		else
			reverse_rotate(stack_a, 'a', 0);
	}
	push(stack_b, stack_a, 'b');
}

void	on_min(t_list **stack_a, t_list **stack_b)
{
	long	min;
	long	place;

	place = find_place_max(*stack_a);
	min = find_min_size(*stack_a);
	while ((*stack_a)->content != min)
	{
		if (place < find_size_stack(*stack_a) / 2)
			rotate(stack_a, 'a', 0);
		else
			reverse_rotate(stack_a, 'a', 0);
	}
	push(stack_b, stack_a, 'b');
}

int	tab_len(char **tabl)
{
	int	i;

	i = 0;
	while (tabl[i] != NULL)
		i++;
	return (i);
}

long	find_place_max(t_list *stack_a)
{
	long	max;
	long	place;
	t_list	*head;

	place = 0;
	head = stack_a;
	max = find_max_size(stack_a);
	while (head->content != max)
	{
		head = head->next;
		place++;
	}
	return (place);
}
