/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasantos <pasantos@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:08:33 by pasantos          #+#    #+#             */
/*   Updated: 2022/09/18 13:08:33 by pasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		c_pos;
	char	*str1;
	char	*str2;

	i = 0;
	while (s[c_pos] != '\0' || s[c_pos] != c)
		c_pos++;
	str1 = malloc(c_pos * sizeof(char) + 1);
	str2 = malloc((ft_strlen(s) - c_pos) * sizeof(char) + 1);
	if (!str1 || !str2)
		return (0);
	while (i++ <= c_pos)
		str1[i] = s[i];
	str1[i] = '\0';
	while (i++ <= ft_strlen(s))
		str2[i] = s[i];
	str2[i] = '\0';
	return(str1, str2);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", );
}

malloc, free
1 string to be split
2 the delimeter character

returns the 2 strings or null if the alloc fails

allocates with malloc and returns an array of strings obtained by
spliting s using the char c as the delimiter. must be ended by 
a null pointer
*/