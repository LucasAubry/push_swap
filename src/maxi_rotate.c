/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxi_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:21:04 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/06 11:16:19 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b, long place, long target_place)
{
	while (place != 0 && target_place != 0)
	{
		if (place == 0 && target_place != 0)
			up_b(stack_b, target_place, 0);
		else if (target_place == 0 && place != 0)
			up_a(stack_a, place, 0);
		else
		{
			rotate(stack_a, 'a', 1);
			rotate(stack_b, 'b', 1);
			place--;
			target_place--;
			printf("rr\n");
		}
	}
}

void	rrr(t_list **stack_a, t_list **stack_b, long place, long target_place)
{
	long	size_a;
	long	size_b;

	size_a = find_size_stack(*stack_a);
	size_b = find_size_stack(*stack_b);
	while (place != size_b && target_place != size_a)
	{
		if (place == size_b && target_place != size_a)
			down_a(stack_a, target_place, 0);
		else if (target_place == size_a && place != size_b)
			down_b(stack_b, place, 0);
		else
		{
			reverse_rotate(stack_a, 'a', 1);
			reverse_rotate(stack_b, 'b', 1);
			place++;
			target_place++;
			printf("rrr\n");
		}
	}
}

void	simple_rotate(long place, long target_place,
		t_list **stack_a, t_list **stack_b)
{
	int	size_a;
	int	size_b;

	size_a = find_size_stack(*stack_a);
	size_b = find_size_stack(*stack_b);
	if (place < size_b / 2)
		up_b(stack_b, place, 0);
	else
		down_b(stack_b, place, 0);
	if (target_place < size_a / 2)
		up_a(stack_a, target_place, 0);
	else
		down_a(stack_a, target_place, 0);
}
