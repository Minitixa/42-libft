/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:09:37 by pasantos          #+#    #+#             */
/*   Updated: 2022/09/18 13:09:37 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t length)
{
	char	*substr;
	size_t	i;

	substr = ft_calloc (ft_strlen(s) + 1, sizeof(char));
	i = 0;
	if (!s || !substr)
		return (0);
	while (s[start] && start <= length)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

/* int main(void)
{
	char str[] = "abcd";
	int start = 1;
	int length = 2;
	printf("%s", ft_substr(str,start,length));
} */

//Returns the portion of string specified by the start 
//and length parameters
