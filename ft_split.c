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
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*strcpy_ft(void *dest, const void *src)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *) src;
	d = (char *) dest;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';

	return (dest);
}

int	strcount(const char *s, char c, int *max_size)
{
	int	j;
	int	i;
	int	count;

	i = 0;
	j = 0;
	count = 0;

	while (s[j])
	{
		if (s[j] == c && j != 0)
		{
			if (s[j-1] != c)
			{
				count++;
				i = 0;
			}
		}
		else
		{
			i++;
			if (i > *max_size)
				*max_size = i;
		}
		j++;
	}

	if (s[j-1] != c )
		count++;
	return (count);
}

char	*ft_dosomething(char *interm_str, char *str_array, int i, int k)
{
	interm_str[i] = '\0';
	strcpy_ft(str_array, interm_str);
	ft_bzero(interm_str, ft_strlen(interm_str));
	return (str_array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		max_size;
	int		str_nbr;

	char	*interm_str;
	char	**str_array;

	i			= 0;
	j			= 0;
	k			= 0;
	max_size	= 0;
	str_nbr		= strcount(s, c, &max_size);

	interm_str = malloc((max_size + 1) * sizeof(char));
	str_array = malloc((str_nbr + 1) * sizeof(char*));

	if (!str_array || !interm_str)
		return (NULL);

	while (i <= str_nbr)
	{
		str_array[i] = malloc((max_size + 1) * sizeof(char));
		i++;
	}
	i = 0;

	while (s[j])
	{
		if (s[j] == c && j != 0)
			if (s[j-1] != c)
				str_array[k] = ft_dosomething(*str_array, interm_str, i, k++);
		else
		{
			printf("%s\n", "supostamente printa");
			interm_str[i++] = s[j];
			if (s[j+1] == 0)
				ft_dosomething(*str_array, interm_str, i, k++);
		}
		j++;
	}
	free(interm_str);
	str_array[k] = NULL;

	return (str_array);
}

int main(void)
{
	const char *s = "a.b.cc";
	char c = '.';
	char **str = ft_split(s,c);
	int i = 0;

	while(str[i] != NULL)
	{
		printf("%s\n", str[i]);
		i++;
	}
}
