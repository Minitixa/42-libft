/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:40:06 by pasantos          #+#    #+#             */
/*   Updated: 2022/10/29 19:43:16 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*interm;

	if (!*lst)
		return ;
	while (*lst)
	{
		interm = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = interm;
	}
}
