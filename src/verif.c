/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:16:54 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/07 11:19:03 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dbl_nomber(t_list *stack_a)
{
	t_list	*head;

	head = stack_a;
	stack_a = stack_a->next;
	while (head)
	{
		while (stack_a)
		{
			if (stack_a->content == head->content)
				return (0);
			stack_a = stack_a->next;
		}
		head = head->next;
		if (head)
			stack_a = head->next;
	}
	return (1);
}

int	is_sort(t_list *stack_a)
{
	if (stack_a == NULL)
		return (0);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	verif(t_list *stack_a, int argc)
{
	t_list	*head;

	head = stack_a;
	while (stack_a)
	{
		if (stack_a->content > 2147483647 || stack_a->content < -2147483648)
		{
			printf("INT Error\n");
			return (0);
		}
		if (argc < 2)
			return (0);
		if (!dbl_nomber(stack_a))
		{
			stack_a = head;
			printf("DBL ERROR\n");
			return (0);
		}
		stack_a = stack_a->next;
	}
	stack_a = head;
	if (is_sort (stack_a))
		return (0);
	stack_a = head;
	return (1);
}
