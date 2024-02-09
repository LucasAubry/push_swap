/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   price.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:21:00 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/02 17:44:20 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	set_price_a(t_list *stack_a, t_list *stack_b)
{
	int	price;
	int	size;

	size = find_size_stack (stack_a);
	if (stack_b->target->index < size / 2)
		price = stack_b->target->index;
	else
		price = size - stack_b->target->index;
	return (price);
}

void	set_price(t_list *stack_a, t_list *stack_b)
{
	long	size;

	size = find_size_stack(stack_b);
	while (stack_b)
	{
		if (stack_b->index < size / 2)
			stack_b->price = stack_b->index
				+ set_price_a(stack_a, stack_b);
		else
			stack_b->price = size - stack_b->index
				+ set_price_a(stack_a, stack_b);
		stack_b = stack_b->next;
	}
}

long	compare_price(t_list *stack_b)
{
	long	lowest_price;
	long	place;

	if (stack_b == NULL)
		return (0);
	lowest_price = stack_b->price;
	place = stack_b->index;
	stack_b = stack_b->next;
	while (stack_b)
	{
		if (stack_b->price < lowest_price)
		{
			lowest_price = stack_b->price;
			place = stack_b->index;
		}
		if (stack_b->next == NULL)
			break ;
		stack_b = stack_b->next;
	}
	return (place);
}
