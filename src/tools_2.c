/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:30:52 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/06 18:38:46 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	on_max(t_list **stack_a, t_list **stack_b)
{
	long	max;
	long	place;

	place = find_place_max(*stack_a);
	max = find_max_size(*stack_a);
	while ((*stack_a)->content != max)
	{
		if (place < find_size_stack(*stack_a) / 2)
			rotate(stack_a, 'a', 0);
		else
			reverse_rotate(stack_a, 'a', 0);
	}
	push(stack_b, stack_a, 'b');
}

int	tab_len(char **tabl)
{
	int	i;

	i = 0;
	while (tabl[i] != NULL)
		i++;
	return (i);
}
