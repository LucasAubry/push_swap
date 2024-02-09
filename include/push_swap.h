/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:11:24 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/11 17:27:44 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void tri_a(t_list **stack_a);
void find_the_closest_A(t_list *stack_a, t_list *stack_b);
int posi_of_diff(t_list *stack_a, t_list *stack_b);
void push (t_list **head_a, t_list **head_b, char name);
void rotate(t_list **head, char name);
void swap(t_list **head, char name);
void reverse_rotate(t_list **head, char name);
int find_size_stack(t_list *stack);
void transit_b(t_list **stack_a, t_list **stack_b);
void print_stack(t_list *stack_a, char name);
int verif(t_list *stack_a);
void algo(t_list *stack_a, t_list *stack_b);


#endif 