/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:14:47 by Laubry            #+#    #+#             */
/*   Updated: 2023/12/29 14:08:35 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// fonction pour test 
void print_stack_a(t_list *stack_a)
{
	while (stack_a->next)
	{
		printf("%zu\n", stack_a->content);
		stack_a = stack_a->next;
	}
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
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}

/*ft_lstadd _back va metre lelemtn que lon a cree grace a lst new 
au denrer maillon de la list chainer
&stack_a c le nom de la list chainer*/

	transit_b(&stack_a, stack_b);
	//print_stack_a(stack_a);
	// il print pb quand ya 1 2 3 4 5 alors quil devrais print pb pb
	// tri_a(stack_a, stack_b);
	



	//find_the_closest(stack_a, stack_b);
	//up_or_low (stack_a, stack_b);
}