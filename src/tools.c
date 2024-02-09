/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:25:08 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/06 15:16:17 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	find_max_size(t_list *stack)
{
	long	max;
	t_list	*second;

	second = stack;
	max = -2147483648;
	while (second)
	{
		if (second->content > max)
		{
			max = second->content;
			second = second->next;
		}
		else
			second = second->next;
	}
	return (max);
}

int	find_size_stack(t_list *stack)
{
	t_list	*second;
	int		i;

	i = 0;
	second = stack;
	while (second)
	{
		second = second->next;
		i++;
	}
	return (i);
}

int	moyenne(t_list *stack_a)
{
	t_list	*head;
	int		i;
	int		result;

	result = 0;
	i = 0;
	head = stack_a;
	while (head)
	{
		result += head->content;
		i++;
		head = head->next;
	}
	return (result / i);
}

// char	**split_push(char *str, char c)
// {
	
// }