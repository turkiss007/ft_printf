/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:47:31 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/13 17:00:01 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (i != 0 && s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (i != 0 && s[i - 1] != c)
		count++;
	return (count);
}

static int	alocate_array(char const *s, char c, char **array)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (i < ft_strlen(s) && s[i] != c)
			i++;
		array[j] = malloc(i - start + 1);
		if (!array[j])
			return (j);
		ft_strlcpy(array[j], s + start, i - start + 1);
		j++;
		i++;
	}
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**array;
	int		j;

	size = count_words(s, c);
	array = malloc((size + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	j = alocate_array(s, c, array);
	if (j >= 0)
	{
		while (j >= 0)
		{
			free(array[j]);
			j--;
		}
		free(array);
		return (NULL);
	}
	array[size] = NULL;
	return (array);
}
