/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:21:00 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/18 10:37:38 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//lui envoyer stack il va stocker les index de chaque stack;
void set_index(t_list *stack)
{
	int i;

	i = 0;
	while (stack)
	{
		stack->index = i++;
		stack = stack->next;
	}
}

t_list	*get_max(t_list	*stack)
{
	t_list	*result;

	result = stack;
	while (stack)
	{
		if (result->content < stack->content)
			result = stack;
		stack = stack->next;
	}
	return (result);
}

// ou va mon index(pille b) dans ma pille a (target)
// ma target c la position ou va un node de b dans a
void set_target(t_list *stack_a, t_list *node_b)
{
	t_list	*result;

	result = get_max(stack_a);
	while (stack_a)
	{
		if (stack_a->content > node_b->content && stack_a->content < result->content)
				result = stack_a;
		stack_a = stack_a->next;
	}
	node_b->target = result;
}

// permet de boucler sur toute la pille pour set_target
void get_target(t_list **stack_a, t_list **stack_b)
{
	t_list	*first;

	first = *stack_b;
	while (first)
	{
		set_target(*stack_a, first);
		first = first->next;
	}
}


// le prix c le nbm de coup pour lamener en haut (pille_b)
// et apres pille_a 
//////////////////////////////////////////////////////////
	// si c au dessu le prix c lindex
	// si c en dessou :
	// le price c la le totale - position si c en dessou de
	// find_size_stack / 2


void set_price(t_list *stack_a, t_list *stack_b)
{
	long size;

	size = find_size_stack(stack_b);
	(void)stack_a;
	while (stack_b)
	{
		if (stack_b->index < size / 2)
			stack_b->price = stack_b->index;
		else
			stack_b->price = size - stack_b->index;
		stack_b = stack_b->next;
	}
}

//comparer les prix de chaque node 

long compare_price(t_list *stack_b)
{
	long lowest_price;
	long place;


//ya une erreur de segfault ici probable;ent par rapport au dernier
	if (stack_b == NULL)
		return (0);
	lowest_price = stack_b->price;
	place = 0;
		if (stack_b->price < lowest_price)
		{
			lowest_price = stack_b->price;
			place = stack_b->index;
		}
		stack_b = stack_b->next;
	return (place);
}
//  --> move
long place_target(t_list *stack_a, long place)
{
	int i;

	i = 0;
	while (i != place)
	{
		stack_a = stack_a->next;
		i++;
	}
	return (i);
}

// et je lexecute le moins chere
// et je recommance jusqua ce que je nest plus rien dans b 




// implementer les rrrrrrrrr ++ tu conais pour opti regarder git juju



// et test apre soit pas con