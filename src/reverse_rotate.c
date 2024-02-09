/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:40 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/27 19:45:27 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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