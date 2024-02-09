/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:40 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/11 13:22:44 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	reverse_rotate(t_list **stack, char name)
// {
//     t_list *back_stack;
//     t_list *last;
//     t_list *stack;
//     if (!*stack || !(*stack)->next)
// 		    return ;
//     back_stack = *stack;
//     stack = back_stack;
//     last = back_stack->next;
//     while(last->next)
//     {
//         back_stack = back_stack->next;
//         last = last->next;
//     }
//     stack = back_stack;
//     stack->content = last->content;
//     printf("rr%c\n", name);
// }





// juju

void	reverse_rotate(t_list **stack, char name)
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
	ft_printf("rr%c\n", name);
}