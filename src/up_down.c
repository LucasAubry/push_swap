/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_down.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:01:34 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/06 11:20:48 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	up_a(t_list **stack_a, long place, int x)
{
	while (place > 0)
	{
		rotate(stack_a, 'a', x);
		place--;
	}
}

void	down_a(t_list **stack_a, long place, int x)
{
	long	size_a;

	size_a = find_size_stack(*stack_a);
	while (place < size_a)
	{
		reverse_rotate(stack_a, 'a', x);
		place++;
	}
}
// b ////////////////////////////////////////////////////////////////

void	up_b(t_list **stack_b, long place, int x)
{
	while (place > 0)
	{
		rotate(stack_b, 'b', x);
		place--;
	}
}

void	down_b(t_list **stack_b, long place, int x)
{
	long	size_b;

	size_b = find_size_stack(*stack_b);
	while (place < size_b)
	{
		reverse_rotate(stack_b, 'b', x);
		place++;
	}
}
