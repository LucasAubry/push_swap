/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:11:24 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/09 11:51:29 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <stdlib.h>

void				find_the_closest_A(t_list *stack_a, t_list *stack_b);
int					posi_of_diff(t_list *stack_a, t_list *stack_b);
void				push(t_list **head_a, t_list **head_b, char name);
void				rotate(t_list **head, char name, int c);
void				swap(t_list **head, char name);
void				reverse_rotate(t_list **head, char name, int c);
int					find_size_stack(t_list *stack);
void				transit_b(t_list **stack_a, t_list **stack_b);
void				print_stack(t_list *stack_a, char name);
int					verif(t_list *stack_a, int argc);
void				algo(t_list *stack_a, t_list *stack_b);
void				set_index(t_list *stack);
void				set_target(t_list *stack_a, t_list *stack_b);
void				get_target(t_list **stack_a, t_list **stack_b);
void				set_price(t_list *stack_a, t_list *stack_b);
long				compare_price(t_list *stack_b);
void				move_node(t_list **stack_a, t_list **stack_b,
						long place, long target_place);
long				place_target(t_list *stack_b, t_list *stack_a, long place);
int					is_sort(t_list *stack_a);
void				after_sort(t_list **stack_a);
int					set_price_a(t_list *stack_a, t_list *stack_b);
void				simple_rotate(long place, long target_place,
						t_list **stack_a, t_list **stack_b);
void				maxi_rotate(long place, long target_place,
						t_list **stack_a, t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b,
						long place, long target_place);
void				rrr(t_list **stack_a, t_list **stack_b,
						long place, long target_place);
void				pre_sort(t_list **stack_a, t_list **stack_b);
int					moyenne(t_list *stack_a);
long				find_max_size(t_list *stack);
void				up_a(t_list **stack_a, long place, int x);
void				down_a(t_list **stack_a, long place, int x);
void				up_b(t_list **stack_b, long place, int x);
void				down_b(t_list **stack_b, long place, int x);
void				sort_for_3(t_list **stack_a);
void				sort_for_5(t_list **stack_a, t_list **stack_b);
long				find_place_max(t_list *stack_a);
void				on_max(t_list **stack_a, t_list **stack_b);
void				five_and_tree(t_list **stack_a, t_list **stack_b);
int					find_the_max(t_list *stack_a);
int					tab_len(char **tabl);
void				clear_free(t_list ***allstack);
void				freeall(t_list ***allstack, char **tabl);
void				ft_freetable(char **table);
void				opti(t_list **stack_a, t_list **stack_b);
void				init_move(t_list **stack_a, t_list **stack_b);
void				free__after_opti(t_list ***alstak, char **arr);
void				print_place(t_list *stack_a, char name);
void				print_target(t_list *stack_a, char name);
void				print_stack(t_list *stack_a, char name);

#endif
