/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:14:47 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/02 12:53:55 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 
void print_stack(t_list *stack_a, char name)
{
	printf("%c : ", name);
	while (stack_a)
	{
		printf("%ld ", stack_a->content);
		stack_a = stack_a->next;
	}
	printf("\n");
}



void print_price(t_list *stack_a, char name)
{
	printf("%c : ", name);
	while (stack_a)
	{
		printf("%d ", stack_a->price);
		stack_a = stack_a->next;
	}
	printf("\n");
}

void print_target(t_list *stack_a, char name)
{
	printf("%c : ", name);
	while (stack_a)
	{
		printf("%ld ", stack_a->target->content);
		stack_a = stack_a->next;
	}
	printf("\n");
}



void init_move(t_list **stack_a, t_list **stack_b)
{
	long place;
	long target_place;
	set_index(*stack_a);
	transit_b(stack_a, stack_b);
	tri_a(stack_a);
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
	print_stack(*stack_a, 'A');
	print_stack(*stack_b, 'B');
}





void opti(t_list **stack_a, t_list **stack_b)
{
	init_move(stack_a, stack_b);
	ft_lstclear(stack_a, &free);
	ft_lstclear(stack_b, &free);
	free(stack_a);
	free(stack_b);
}


int main(int argc, char *argv[])
{
	int 	i;
	t_list	**stack_a;
	t_list	**stack_b;

	i = 1;
	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));	
	*stack_a = NULL;
	*stack_b = NULL;
	//pour gerer les "1 4 8 7" il faut faire un split
	while (i < argc)
	{
		if (ft_isdigit(argv[i]))
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
	if (!verif(*stack_a, argc))
		return (0);
	opti(stack_a, stack_b);
}
