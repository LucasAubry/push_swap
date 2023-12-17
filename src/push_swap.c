/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:14:47 by Laubry            #+#    #+#             */
/*   Updated: 2023/12/17 18:51:38 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	while (stack_a != NULL)
	{
		printf("%zu\n", stack_a->content);
		stack_a = stack_a->next;
	}

	// tri_a(stack_a, stack_b);
	// find_the_closest(stack_a, stack_b);
	// up_or_low (stack_a, stack_b);
}