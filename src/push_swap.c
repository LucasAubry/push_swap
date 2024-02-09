/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:14:47 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/22 17:26:42 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// fonction pour test 

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


int main(int argc, char *argv[])
{
	long place;
	long target_place;
	int 	i;
	t_list	**stack_a;
	t_list	**stack_b;

	i = 1;
	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));	
	*stack_a = NULL;
	*stack_b = NULL;
	/*ft_lstadd _back va metre lelemtn que lon a cree grace a lst new 
	au denrer maillon de la list chainer
	&stack_a c le nom de la list chainer*/
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
		if (argc <= 2)
			return (0);
		if (is_sort(*stack_a))
			return (0);
		if (!verif(*stack_a))
			return (0);
	transit_b(stack_a, stack_b);
	tri_a(stack_a);
	while (*stack_b)
	{
		print_stack(*stack_a, 'A');
		print_stack(*stack_b, 'B');
		set_index(*stack_a);
		get_target(stack_a, stack_b);
		place = compare_price(*stack_b);
		target_place = place_target(*stack_a, (*stack_b)->target->index);
		move_node(stack_a, stack_b, place, target_place);
	}
	after_sort(stack_a);
	print_stack(*stack_a, 'A');
	print_stack(*stack_b, 'B');
}
