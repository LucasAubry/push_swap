/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_B.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:25 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/06 18:22:50 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_big(t_list *stack_a)
{
	t_list	*head;

	head = stack_a;
	while (head->next)
	{
		if (head->content > moyenne(stack_a))
			return (0);
		else
			head = head->next;
	}
	return (1);
}

void	transit_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_b;
	long	max;

	first_b = *stack_b;
	max = find_max_size(*stack_a);
	while (find_size_stack(*stack_a) > 3)
	{
		while (!check_big(*stack_a))
		{
			if ((*stack_a)->content != max)
			{
				if ((*stack_a)->content > moyenne(*stack_a))
					push(stack_b, stack_a, 'b');
				else
					rotate(stack_a, 'a', 0);
			}
			else
				rotate(stack_a, 'a', 0);
		}
		if (find_size_stack(*stack_a) > 3)
			push(stack_b, stack_a, 'b');
	}
}
