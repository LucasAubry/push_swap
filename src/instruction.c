/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:13:23 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/02 17:43:33 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **head_a, t_list **head_b, char name)
{
	t_list	*first_b;

	first_b = *head_b;
	if (!first_b)
		return ;
	*head_b = first_b->next;
	ft_lstadd_front(head_a, first_b);
	ft_printf("p%c\n", name);
}

void	reverse_rotate(t_list **stack, char name, int c)
{
	t_list	*last;
	t_list	*before_last;

	if (!*stack || !(*stack)->next)
		return ;
	before_last = *stack;
	last = before_last->next;
	while (last->next)
	{
		before_last = before_last->next;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
	if (c == 0)
		ft_printf("rr%c\n", name);
}

void	rotate(t_list **head, char name, int c)
{
	t_list	*last;

	if (!*head)
		return ;
	last = ft_lstlast(*head);
	last->next = *head;
	*head = (*head)->next;
	last->next->next = NULL;
	if (c == 0)
		ft_printf("r%c\n", name);
}

void	swap(t_list **head, char name)
{
	t_list	*first;
	t_list	*second;
	int		temp;

	first = *head;
	second = first->next;
	if (!second || !first)
		return ;
	temp = first->content;
	first->content = second->content;
	second->content = temp;
	ft_printf("s%c\n", name);
}
