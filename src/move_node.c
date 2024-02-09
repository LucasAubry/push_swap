/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:20:56 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/06 18:35:22 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_node(t_list **stack_a, t_list **stack_b,
		long place, long target_place)
{
	int	size_a;
	int	size_b;

	size_a = find_size_stack(*stack_a);
	size_b = find_size_stack(*stack_b);
	if (stack_b == NULL)
		return ;
	simple_rotate(place, target_place, stack_a, stack_b);
	push(stack_a, stack_b, 'a');
}

void	after_sort(t_list **stack_a)
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

void	sort_for_3(t_list **head)
{
	long	max;

	max = find_max_size(*head);
	if ((*head)->content == max)
		rotate(&(*head), 'a', 0);
	if (find_size_stack(*head) > 1 && (*head)->next->content == max)
		reverse_rotate(&(*head), 'a', 0);
	if (find_size_stack(*head) > 1 && (*head)->content > (*head)->next->content)
		swap(&(*head), 'a');
}

void	sort_for_5(t_list **stack_a, t_list **stack_b)
{
	on_max(stack_a, stack_b);
	on_max(stack_a, stack_b);
	sort_for_3(stack_a);
	rotate(stack_b, 'b', 0);
	push(stack_a, stack_b, 'a');
	push(stack_a, stack_b, 'a');
	rotate(stack_a, 'a', 0);
	rotate(stack_a, 'a', 0);
}

void	five_and_tree(t_list **stack_a, t_list **stack_b)
{
	if (find_size_stack(*stack_a) <= 3)
		sort_for_3(stack_a);
	else if (find_size_stack(*stack_a) <= 5)
		sort_for_5(stack_a, stack_b);
}
