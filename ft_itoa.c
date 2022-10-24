/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:08:02 by pasantos          #+#    #+#             */
/*   Updated: 2022/09/18 13:08:02 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	i;

	i = 1;

	if (n < 0)
		n *= -1;
	while (n > 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_nbrlen(n);
	str = ft_calloc(len, sizeof(char) + 2);
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		len += 1;
		n *= -1;
	}
	while (n > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	printf("%s", ft_itoa(-8598));
} */