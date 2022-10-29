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

char	*ft_substr(char const *s, unsigned int start, size_t length)
{
	char	*substr;
	size_t	i;

	substr = ft_calloc (length + 1, sizeof(char));
	i = 0;
	if (!s || !substr)
		return (0);
	while (start < ft_strlen(s) && i < length)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
