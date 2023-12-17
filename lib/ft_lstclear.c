/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:51:38 by Laubry            #+#    #+#             */
/*   Updated: 2023/12/11 16:00:20 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
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
