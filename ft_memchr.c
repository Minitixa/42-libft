/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:27:03 by tisha             #+#    #+#             */
/*   Updated: 2022/09/18 13:07:25 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = (char *) s;
	while (i < n)
	{
		if ((unsigned char)src[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/* 
#include <stdio.h>

int main()
{
	char dest[5] = "vvvov";

	int i;
	i = 0;
	ft_memchr(dest, 'o', sizeof(char) * 5);
	while (i < 10)
	{
		printf("%c", dest[i]);
		i++;
	}
}  */