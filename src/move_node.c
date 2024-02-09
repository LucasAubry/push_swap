/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:20:56 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/18 15:55:55 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"












void up(t_list **stack_a, t_list **stack_b, long place, long target_place)
{
	// long double_rotate;

	// if (place > 0 && target_place > 0)
		
	while (place > 0)
	{
		rotate(stack_b, 'b');
		place--;
	}
	while (target_place > 0)
	{
		rotate(stack_a, 'a');
		target_place--;
	}
	push(stack_a, stack_b, 'a');
}

void down(t_list **stack_a, t_list **stack_b, long place, long target_place)
{
	 long size;

	size = find_size_stack(*stack_b);
	while (place < size)
	{
		reverse_rotate(stack_b, 'b');
		place++;
	}
	while (target_place < size)
	{
		reverse_rotate(stack_a, 'a');
		target_place++;
	}
	push(stack_a, stack_b, 'a');
}

void move_node(t_list **stack_a, t_list **stack_b, long place, long target_place)
{
	if (stack_b == NULL)
		return ;
	if (place < find_size_stack(*stack_b) / 2)
		up(stack_a, stack_b, place, target_place);
	else
		down(stack_a, stack_b, place, target_place);
}
