/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:11:24 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/25 13:52:50 by Laubry           ###   ########.fr       */
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
void set_index(t_list *stack);
void set_target(t_list *stack_a, t_list *stack_b);
void get_target(t_list **stack_a, t_list **stack_b);
void set_price(t_list *stack_a, t_list *stack_b);
long compare_price(t_list *stack_b);
void move_node(t_list **stack_a, t_list **stack_b, long place, long target_place);
long place_target(t_list *stack_b, t_list *stack_a, long place);
void print_place(t_list *stack_a, char name);
void print_target(t_list *stack_a, char name);
void print_stack(t_list *stack_a, char name);
int is_sort(t_list *stack_a);
void after_sort(t_list **stack_a);
void last_move(t_list *stack_a);
int set_price_a(t_list *stack_a, t_list *stack_b, int i);



#endif