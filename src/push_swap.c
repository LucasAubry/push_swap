/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:14:47 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/09 12:00:57 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_move(t_list **stack_a, t_list **stack_b)
{
	long	place;
	long	target_place;

	set_index(*stack_a);
	transit_b(stack_a, stack_b);
	sort_for_3(stack_a);
	while (*stack_b)
	{
		set_index(*stack_a);
		set_index(*stack_b);
		get_target(stack_a, stack_b);
		set_price(*stack_a, *stack_b);
		place = compare_price(*stack_b);
		target_place = place_target(*stack_b, *stack_a, place);
		move_node(stack_a, stack_b, place, target_place);
	}
	after_sort(stack_a);
}

int	in_stack(int argc, char *argv[], t_list **stack_a)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (ft_isdigit(argv[i]) && ft_strncmp(argv[i], "-", 2))
		{
			ft_lstadd_back(stack_a, ft_lstnew(ft_atol(argv[i])));
			i++;
		}
		else
		{
			ft_printf("Error\n");
			return (0);
		}
	}
	return (1);
}

int	if_dbl_quote(int *len_tab, char **tabl, t_list ***alstak)
{
	if (!tabl[0])
	{
		ft_freetable(tabl);
		free(alstak[0]);
		free(alstak[1]);
		free(alstak);
		ft_printf("Error\n");
		return (0);
	}
	*len_tab = tab_len(tabl);
	if (!in_stack(*len_tab, tabl, alstak[0]))
	{
		freeall(alstak, tabl);
		return (0);
	}
	return (1);
}

t_list	***set_stack(void)
{
	t_list	**stack_a;
	t_list	**stack_b;
	t_list	***alstak;

	alstak = malloc(2 * sizeof(t_list **));
	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));
	*stack_a = NULL;
	*stack_b = NULL;
	alstak[0] = stack_a;
	alstak[1] = stack_b;
	return (alstak);
}

int	main(int argc, char *argv[])
{
	t_list			***alstak;
	static char		**tabl = NULL;
	int				len_tab;

	len_tab = argc - 1;
	if (argc == 1)
		return (0);
	if (ft_strncmp("", argv[1], 1) == 0)
		return (0);
	alstak = set_stack();
	if (len_tab == 1)
	{
		tabl = ft_split(argv[1], ' ');
		if (!if_dbl_quote(&len_tab, tabl, alstak))
			return (0);
	}
	else if (!in_stack(len_tab, argv + 1, alstak[0]))
		return (clear_free(alstak), 0);
	if (!verif(*alstak[0], len_tab))
		return (freeall(alstak, tabl), 0);
	if (find_size_stack(*alstak[0]) <= 3 || find_size_stack(*alstak[0]) <= 5)
		five_and_tree(alstak[0], alstak[1]);
	else
		opti(alstak[0], alstak[1]);
	free__after_opti(alstak, tabl);
}
