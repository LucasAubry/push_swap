/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:14:47 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/05 16:41:48 by Laubry           ###   ########.fr       */
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

int main(int argc, char *argv[])
{
	int 	i;
	t_list	*stack_a;
	t_list	*stack_b;

	i = 1;
	stack_b = NULL;
	stack_a = NULL;
	while (i < argc)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atol(argv[i])));
		i++;
	}

	/*ft_lstadd _back va metre lelemtn que lon a cree grace a lst new 
	au denrer maillon de la list chainer
	&stack_a c le nom de la list chainer*/

	//print_stack(stack_a, 'A');
	//print_stack(stack_b, 'B');
	transit_b(&stack_a, &stack_b);
	//print_stack(stack_a, 'A');
	//print_stack(stack_b, 'B');

	tri_a(&stack_a);
	print_stack(stack_a, 'A');
	print_stack(stack_b, 'B');

	printf("////////////////\n");
	find_the_closest_A(stack_a, stack_b);
}