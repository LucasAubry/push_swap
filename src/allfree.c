/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allfree.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:44:57 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/08 16:47:01 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freetable(char **table)
{
	int	i;

	i = 0;
	if (!table)
		return ;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
	return ;
}

void	freeall(t_list ***alstak, char **tabl)
{
	ft_freetable(tabl);
	ft_lstclear(alstak[0], free);
	free(alstak[0]);
	ft_lstclear(alstak[1], free);
	free(alstak[1]);
	free(alstak);
}

void	clear_free(t_list ***alstak)
{
	ft_lstclear(alstak[0], free);
	free(alstak[0]);
	ft_lstclear(alstak[1], free);
	free(alstak[1]);
	free(alstak);
}

void	opti(t_list **stack_a, t_list **stack_b)
{
	init_move(stack_a, stack_b);
	ft_lstclear(stack_a, &free);
	ft_lstclear(stack_b, &free);
}

void	free__after_opti(t_list ***alstak, char **arr)
{
	t_list	*first;
	t_list	*tmp;
	int		i;

	if (arr)
	{
		i = -1;
		while (arr[++i])
			free(arr[i]);
		free(arr);
	}
	first = *alstak[0];
	tmp = first;
	while (first)
	{
		tmp = first;
		first = first->next;
		free(tmp);
	}
	free(alstak[0]);
	free(alstak[1]);
	free(alstak);
}
