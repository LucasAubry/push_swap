/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:20:56 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/24 22:17:39 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void up(t_list **stack_a, t_list **stack_b, long place, long target_place)
// {

// 	// A FAIRE VITE
// 	// long double_rotate;

// 	// if (place > 0 && target_place > 0)
	
// 	while (place > 0)
// 	{
// 		rotate(stack_b, 'b');
// 		place--;
// 	}
// 	while (target_place > 0)
// 	{
// 		rotate(stack_a, 'a');
// 		target_place--;
// 	}
// 	push(stack_a, stack_b, 'a');
// }

// void down(t_list **stack_a, t_list **stack_b, long place, long target_place)
// {
// 	// (void)stack_a;
// 	// (void)stack_b;
// 	// (void)place;
// 	// (void)target_place;
// 	 long size_b;
// 	 long size_a;

// 	size_b = find_size_stack(*stack_b);
// 	size_a = find_size_stack(*stack_a);
// 	while (place < size_b)
// 	{
// 		reverse_rotate(stack_b, 'b');
// 		place++;
// 	}
// 	while (target_place < size_a)
// 	{
// 		reverse_rotate(stack_a, 'a');
// 		target_place++;
// 	}
// 	push(stack_a, stack_b, 'a');
// }

// void move_node(t_list **stack_a, t_list **stack_b, long place, long target_place)
// {
// 	if (stack_b == NULL)
// 		return ;
// 	if (place <= find_size_stack(*stack_b) / 2)
// 		up(stack_a, stack_b, place, target_place);
// 	else
// 		down(stack_a, stack_b, place, target_place);
// }




void up(t_list **stack_a, t_list **stack_b, long place, char c)
{	
	while (place > 0)
	{
		if (c == 'a')
			rotate(stack_a, c);
		else
			rotate(stack_b, c);
		place--;
	}
}


void down(t_list **stack_a, t_list **stack_b, long place, char c)
{
	long size_a;
	long size_b;

	size_a = find_size_stack(*stack_a);
	size_b = find_size_stack(*stack_b);
	if (c == 'a')
		while (place < size_a)
		{
			reverse_rotate(stack_a, c);
			place++;
		}
	else
		while (place < size_b)
		{
			reverse_rotate(stack_b, c);
			place++;
		}
}


void move_node(t_list **stack_a, t_list **stack_b, long place, long target_place)
{
	int size_a;
	int size_b;

	size_a = find_size_stack(*stack_a);
	size_b = find_size_stack(*stack_b);
	if (stack_b == NULL)
		return ;
	if (place < size_b / 2)
		up(stack_a, stack_b, place, 'b');
	else
		down(stack_a, stack_b, place, 'b');
	if (target_place < size_a / 2)
		up(stack_a, stack_b, target_place, 'a');
	else
		down(stack_a, stack_b, target_place, 'a');
	push(stack_a, stack_b, 'a');
}




int find_the_max(t_list *stack_a)
{
	int max;

	max = 0;
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
	t_list *head;
	t_list *top;

	top = *stack_a;
	head = *stack_a;
	while (top->content != find_the_max(head))
	{
		top = *stack_a;
		while (head->content != find_the_max(head))
			head = head->next;
		set_index(head);
		if (head->index < find_size_stack(head) / 2)
			rotate(stack_a, 'a');
		else
			reverse_rotate(stack_a, 'a');
	}
}