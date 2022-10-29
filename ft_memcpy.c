/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:29:13 by tisha             #+#    #+#             */
/*   Updated: 2022/10/29 19:22:12 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *) src;
	b = (char *) dest;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dest);
}

/* int main()
{
	char dest[5] = "vvvvv";
	char src[2] = "oo";

	int i;
	i = 0;
	ft_memcpy(dest, src, sizeof(char) * 2);
	while (i < 10)
	{
		printf("%c", dest[i]); //Outputs "oovvv"
		i++;
	}
}  */
