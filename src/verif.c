/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:16:54 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/15 18:03:41 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int dbl_nomber(t_list *stack_a)
{
	t_list *head;

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


int verif(t_list *stack_a)
{
	t_list *head;

	head = stack_a;
	while (stack_a)
	{
		if (!dbl_nomber(stack_a))
		{
			stack_a = head;
			printf("DBL ERROR\n");
			return (0);
		}
		stack_a = stack_a->next;
	}
	stack_a = head;
	return (1);
}


//"1 2 5" ca doit fonctionner 