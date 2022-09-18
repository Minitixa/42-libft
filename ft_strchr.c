/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:29:26 by tisha             #+#    #+#             */
/*   Updated: 2022/09/18 13:08:37 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

/* #include <stdio.h>
int main()
{
	char dest[5] = "vvvov";

	int i;
	i = 0;
	ft_strchr(dest, 'o');
	while (i < 1)
	{
		printf("%s", ft_strchr(dest, 'o'));
		i++;
	}
} */
