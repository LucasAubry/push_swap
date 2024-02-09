/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:11:47 by Laubry            #+#    #+#             */
/*   Updated: 2024/01/02 14:50:36 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(long content)
{
	t_list	*chaine;

	chaine = malloc(sizeof(t_old_list));
	if (!chaine)
		return (NULL);
	chaine->content = content;
	chaine->next = NULL;
	return (chaine);
}