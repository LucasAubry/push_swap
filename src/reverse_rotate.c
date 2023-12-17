/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:40 by Laubry            #+#    #+#             */
/*   Updated: 2023/12/17 00:47:37 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate(t_list **head, char name)
{
    t_list *last;
    t_list *current;

    if (!*head || !(*head)->next)
        return;
    last = *head;
    current = *head;
    while (last->next)
    {
        current = last;
        last = last->next;
    }
    current->next = NULL;
    last->next = *head;
    *head = last;
    ft_printf("rr%c\n", name);
}