/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:20:56 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/02 17:10:49 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	up(t_list **stack_a, t_list **stack_b, long place, char c, int x)
{	
	while (place > 0)
	{
		if (c == 'a')
			rotate(stack_a, c, x);
		else
			rotate(stack_b, c, x);
		place--;
	}
}

void	down(t_list **stack_a, t_list **stack_b, long place, char c, int x)
{
	long	size_a;
	long	size_b;

	size_a = find_size_stack(*stack_a);
	size_b = find_size_stack(*stack_b);
	if (c == 'a')
		while (place < size_a)
		{
			reverse_rotate(stack_a, c, x);
			place++;
		}
	else
		while (place < size_b)
		{
			reverse_rotate(stack_b, c, x);
			place++;
		}
}

void	move_node(t_list **stack_a, t_list **stack_b, long place, long target_place)
{
	int	size_a;
	int	size_b;

	size_a = find_size_stack(*stack_a);
	size_b = find_size_stack(*stack_b);
	if (stack_b == NULL)
		return ;
	// if (place < size_b / 2 && target_place < size_a / 2)
	// 	rr(stack_a, stack_b, place, target_place);
	// else if (place > size_b / 2 && target_place > size_a / 2)
	// 	rrr(stack_a, stack_b, place, target_place);
	// 	// maxi_rotate(place, target_place, stack_a, stack_b);
	// else
	simple_rotate(place, target_place, stack_a, stack_b);
	push(stack_a, stack_b, 'a');
}

int	find_the_max(t_list *stack_a)
{
	int	max;

	max = -2147483648;
	while (stack_a)
	{
		if (max < stack_a->content)
			max = stack_a->content;
		stack_a = stack_a->next;
	}
	return (max);
}
// c pas optimiser
void after_sort(t_list **stack_a)
{
	t_list	*head;
	t_list	*top;

	top = *stack_a;
	head = *stack_a;
	while (top->content != find_the_max(head))
	{
		top = *stack_a;
		while (head->content != find_the_max(head))
			head = head->next;
		set_index(head);
		if (head->index < find_size_stack(head) / 2)
			rotate(stack_a, 'a', 0);
		else
			reverse_rotate(stack_a, 'a', 0);
	}
}
