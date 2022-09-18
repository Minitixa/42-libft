/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:29:24 by tisha             #+#    #+#             */
/*   Updated: 2022/09/18 13:07:40 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *)s;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (s);
}

/* int main()
{
	char test[5] = "vvvvv";
	int i;
	i = 0;
	ft_memset(test, 'o', sizeof(char) * 4);
	while (i < 10)
	{
		printf("%c", test[i]); //Outputs "oooov"
		i++;
	}
} */
