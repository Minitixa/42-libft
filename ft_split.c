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

#include "libft.h"

int	str_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (!str[0])
		return (count);
	while (str[i])
	{
		if (str[i + 1] == 0 || (str[i] == c && str[i - 1] != c))
			count++;
		i++;
	}
	return (count);
}

char	*splitter(const char *s, int start, int end)
{
	int		i;
	char	*splitted_str;

	i = 0;
	splitted_str = malloc((end - start + 1) * sizeof(char));
	if (!splitted_str)
		return (NULL);
	while (start < end)
		splitted_str[i++] = s[start++];
	splitted_str[i] = 0;
	return (splitted_str);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int			set;
	char		**str_array;

	i = 0;
	j = 0;
	set = -1;
	str_array = malloc((str_count(s, c) + 1) * sizeof(char *));
	if (!str_array || !s)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && set < 0)
			set = i;
		else if ((s[i] == c || i == ft_strlen(s)) && set >= 0)
		{
			str_array[j++] = splitter(s, set, i);
			set = -1;
		}
		i++;
	}
	str_array[j] = NULL;
	return (str_array);
}
