/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transac.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:16:54 by Laubry            #+#    #+#             */
/*   Updated: 2023/12/17 05:23:25 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*prendre le premier chiffre dans B et regarder quelle est le plus
proche de lui dans A 
verifier si il est sur la partie haute ou basse 
et faire rra ou rrb en consequance et pa

faire ca tant que b nes pas terminer*/



// moitier haute
void up(t_list *stack_a, t_list *stack_b, size_t place, size_t i)
{
	while(i < place + 1)
	{
		rotate(&stack_b , 'b');
		i++;
	}
	push(&stack_a, &stack_b, 'a');
}

// moitier basse 
void down(t_list *stack_a, t_list *stack_b, size_t place, size_t i)
{
	size_t j;

	j = 0;
	while(j < (i - place) + 1)
	{
		reverse_rotate(&stack_b, 'b');
		j++;
	}
	push(&stack_a, &stack_b, 'a');
}

//cherche le caractere le plsu proche et renvoie ca position 
size_t find_the_closest(t_list *stack_a, t_list *stack_b)
{
	t_list *seconde_a;
	t_list *seconde_b;
	size_t prix;
	size_t place;
	int i;

	prix = 0;
	i = 0;
	seconde_a = stack_a;
	seconde_b = stack_b;
	while(seconde_b->next)
	{
		if(prix > seconde_b->content - seconde_a->content)
		{
			prix = seconde_b->content - seconde_a->content;
			place = i;
		}
		seconde_b = seconde_b->next;
		i++;
	}
	return (place);
}
//en fonction de si le caractere est en moitier haute ou moitier bas
//rra ou ra
void up_or_low (t_list *stack_a, t_list *stack_b)
{
	while(stack_b->next)
	{
		size_t i;
		size_t place;

		i = find_size_stack(stack_b);
		place = find_the_closest(stack_a, stack_b);
		if(place > i / 2)
			up(stack_a, stack_b, place, i);
		else
			down(stack_a, stack_b, place, i);
	}
}