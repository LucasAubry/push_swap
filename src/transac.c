/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transac.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:16:54 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/05 16:33:35 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.h"

//prendre le premier chiffre dans B et regarder quelle est le plus
//proche de lulong place;
// 	}
// 	push(&stack_a, &stack_b, 'a');
// }

// // moitier basse
// void down(t_list *stack_a, t_list *stack_b, long i)
// {
// 	long j;

// 	j = 0;
// 	while (j < (i - stack_b->place) + 1)
// 	{
// 		reverse_rotate(&stack_b, 'b');
// 		j++;
// 	}
// 	push(&stack_a, &stack_b, 'a');
// 	print_stack(stack_a, 'D');
// }

// cherche le caractere le plsu proche et renvoie ca position
// void find_the_closest(t_list *stack_a, t_list *stack_b)
// {
// 	t_list *second_a;
// 	t_list *second_b;

// 	second_a = stack_a;
// 	second_b long place;= stack_b;
// 	while (second_b->next)
// 	{
// 		stack_b->place = 500;
// 		while(second_a->next)
// 		{
// 			if (stack_b->place > second_a->content - second_b->content)
// 				stack_b->place = second_a->content - second_b->content;
// 			second_a = second_a->next;
// 		}
// 		second_a = stack_a;
// 		second_b = second_b->next;
// 		stack_b = stack_b->next;
// 	}
// }







// en fonction de si le caractere est en moitier haute ou moitier bas
// rra ou ra
// void up_or_low(t_list *stack_a, t_list *stack_b)
// {
// 	while (stack_b->next)
// 	{
// 		long i;

// 		i = find_size_stack(stack_b);
// 		find_the_closest(stack_a, stack_b);
// 		if (stack_b->place > i / 2)
// 			up(stack_a, stack_b, i);
// 		else
// 			down(stack_a, stack_b, i);
// 	}
// }
