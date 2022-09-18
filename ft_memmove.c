/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:29:20 by tisha             #+#    #+#             */
/*   Updated: 2022/09/18 17:42:04 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}	
	}
	return (dest);
}

/* int main()
{
	char dest[5] = "vvvvv";
	char src[8] = "ooo00ooo";

	int i;
	i = 0;
	ft_memmove(dest, src, sizeof(char) * 4);
	while (i < 10)
	{
		printf("%c", dest[i]); //Outputs "oovvv"
		i++;
	}
} */
