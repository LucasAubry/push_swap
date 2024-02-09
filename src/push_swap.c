/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:14:47 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/12 23:29:12 by Laubry           ###   ########.fr       */
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
	t_list	**stack_a;
	t_list	**stack_b;

	i = 1;
	stack_a = malloc(sizeof(t_list *));
	stack_b = malloc(sizeof(t_list *));	
	*stack_a = NULL;
	*stack_b = NULL;
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
	if (!verif(*stack_a))
		return (0);
	print_stack(*stack_a, 'A');
	print_stack(*stack_b, 'B');

	/*ft_lstadd _back va metre lelemtn que lon a cree grace a lst new 
	au denrer maillon de la list chainer
	&stack_a c le nom de la list chainer*/
	
	

	transit_b(stack_a, stack_b);
	
	tri_a(stack_a);
	
	print_stack(*stack_a, 'A');
	print_stack(*stack_b, 'B');

	printf("////////////////\n");

	
	
	
}