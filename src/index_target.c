/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_target.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:00:45 by Laubry            #+#    #+#             */
/*   Updated: 2024/03/21 16:21:55 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_max(t_list	*stack)
{
	t_list	*result;

	result = stack;
	while (stack)
	{
		if (result->content < stack->content)
			result = stack;
		stack = stack->next;
	}
	return (result);
}

void	set_index(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->index = i++;
		stack = stack->next;
	}
}

void	set_target(t_list *stack_a, t_list *node_b)
{
	t_list	*result;

	result = get_max(stack_a);
	while (stack_a)
	{
		if (stack_a->content > node_b->content
			&& stack_a->content < result->content)
			result = stack_a;
		stack_a = stack_a->next;
	}
	node_b->target = result;
}

void	get_target(t_list **stack_a, t_list **stack_b)
{
	t_list	*first;

	first = *stack_b;
	while (first)
	{
		set_target(*stack_a, first);
		first = first->next;
	}
}

long	place_target(t_list *stack_b, t_list *stack_a, long place)
{
	t_list	*head;
	int		i;
	long	target_place;

	head = stack_b;
	i = 0;
	while (i != place)
	{
		head = head->next;
		i++;
	}
	target_place = head->target->content;
	i = 0;
	head = stack_a;
	while (head->content != target_place)
	{
		head = head->next;
		i++;
	}
	return (i);
}
