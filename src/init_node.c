/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:21:00 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/28 14:20:03 by Laubry           ###   ########.fr       */
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

int set_price_a(t_list *stack_a, t_list *stack_b, int i)
{
	int price;
	int size;

	size = find_size_stack(stack_a);
	if(i == 1)
		price = stack_b->target->index;
	else
		price = stack_b->target->index - size / 2;
	return (price);
}

void set_price(t_list *stack_a, t_list *stack_b)
{
	long size;

	size = find_size_stack(stack_b);
	while (stack_b)
	{
		if (stack_b->index < size / 2)
			stack_b->price = stack_b->index + set_price_a(stack_a, stack_b, 1);
		else
			stack_b->price = size - stack_b->index + set_price_a(stack_a, stack_b, 0);
		stack_b = stack_b->next;
	}
}

long compare_price(t_list *stack_b)
{
	long lowest_price;
	long place;

	if (stack_b == NULL)
		return (0);
	lowest_price = stack_b->price;
	place = stack_b->index;
	stack_b = stack_b->next;
	while (stack_b)
	{
		if (stack_b->price < lowest_price)
		{
			lowest_price = stack_b->price;
			place = stack_b->index;
		}
		if (stack_b->next == NULL)
			break ;
		stack_b = stack_b->next;
	}
	return (place);
}
//comparer les prix de chaque node

//dernier modif
//  --> place de la terget
long place_target(t_list *stack_b, t_list *stack_a, long place)
{
	t_list *head;
	int i;
	long target_place;

	head = stack_b;
	i = 0;
	while (i != place)
	{
		head = head->next;
		i++;
	}
	target_place = head->target->content;
	i = 0;
	head = stack_a;
	while (head->content != target_place)
	{
		head = head->next;
		i++;
	}
	return (i);
}