/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:46:33 by tisha             #+#    #+#             */
/*   Updated: 2022/09/18 13:33:07 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, char *str2, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) str1;
	if (n == 0)
		return (0);
	while (str[i] == str2[i] && i < n)
		i++;
	if (n == i)
		i--;
	return ((unsigned char)str[i] - (unsigned char)str2[i]);
}
