/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_B.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:25 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/02 15:23:20 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
je fais quoi ??

: 

metre tout dans b sauf 3 dont le plus grand
tri a plus grand en BAS
tant que b contien des truc calculer prix et mouve 


Prix :
Est-ce que moitie haute ?
	-> Oui : prix = index
	-> Non : prix = Taille - index

Ajouter au prix le prix de la target :
Est-ce que meme moitie :
	-> Oui : prix += diff(price A, price B)
	-> Non : prix += prix A


*/




//metre tout dans b sauf 3 dont le plus grand


long find_max_size(t_list *stack)
{
	long max;
	t_list *second;
	second = stack;

	max = -2147483648;
	while (second)
	{
		if(second->content > max)
		{
			max = second->content;
			second = second->next;
		}
		else
			second = second->next;
	}
	// printf("%s %zu\n", "max =", max);
	return (max);
}

int find_size_stack(t_list *stack)
{
	t_list *second;
	int i;
	i = 0;

	second = stack;
	while(second)
	{
		second = second->next;
		i++;
	}
	// printf("%s %d\n", "taille de stack =", i);
	return (i);
}

int moyenne(t_list *stack_a)
{
	t_list *head;
	int i;
	int result;

	result = 0;
	i = 0;
	head = stack_a;
	while (head)
	{
		result += head->content;
		i++;
		head = head->next;
	}
	return (result / i);
} 

int check_big(t_list *stack_a)
{
	t_list *head;

	head = stack_a;
	while (head->next)
	{
		if (head->content > moyenne(stack_a))
			return 0;
		else
			head = head->next;
	}
	return 1;
}

void transit_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_b;
	long	max;

	first_b = *stack_b;
	max = find_max_size(*stack_a);
	while (find_size_stack(*stack_a) > 3)
	{
		while (!check_big(*stack_a))
		{
			if ((*stack_a)->content != max)
			{
				if ((*stack_a)->content > moyenne(*stack_a))
					push(stack_b, stack_a, 'b');
				else
					rotate(stack_a, 'a', 0);
			}
			else
				rotate(stack_a, 'a', 0);
		}
		if (find_size_stack(*stack_a) > 3)
			push(stack_b, stack_a, 'b');
	}
}

///trier a pour metre le plus grand en bas
void tri_a(t_list **head)
{
	long	max;

	max = find_max_size(*head);
	if ((*head)->content == max)
	{
		rotate(&(*head), 'a', 0);
	}
	if (find_size_stack(*head) > 1 && (*head)->next->content == max)
	{
		reverse_rotate(&(*head), 'a', 0);
	}
	if (find_size_stack(*head) > 1 && (*head)->content > (*head)->next->content)
	{
 		swap(&(*head), 'a');
	}
}