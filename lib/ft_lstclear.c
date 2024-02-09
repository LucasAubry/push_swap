/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:51:38 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/02 14:36:27 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(long))
{
	t_list	*dest;

	while (*lst)
	{
		dest = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(dest, del);
	}
	*lst = NULL;
}
