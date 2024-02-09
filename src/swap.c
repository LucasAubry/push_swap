/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:17:47 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/17 15:20:53 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_list **head, char name)
{
	t_list	*first;
	t_list	*second;
	int 	temp;

	first = *head;
	second = first->next;
	if (!second || !first)
		return ;
	temp = first->content;
	first->content = second->content;
	second->content = temp;
	ft_printf("s%c\n", name);
}

/*
en gros se quon va faire c que 
quand on va metre a ou b ou s ca va changer se quon print 
psk en soi les swap c le meme 
pour le ss faut voir parcontre il faudrait desactiver le print
a la fin de la deuxieme execution pour le sb psk 
pour le ss on va fair sa et sb mais faut que sa qui printf ss et pas sb

force
*/
