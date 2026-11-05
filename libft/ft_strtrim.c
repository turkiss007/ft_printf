/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:50:28 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/08 17:50:30 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_num(char const *s1, char const *set, size_t start_point,
					int direction)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (j < ft_strlen(set))
	{
		if (s1[start_point + (i * direction)] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*result;

	start = trim_num(s1, set, 0, 1);
	len = trim_num(s1, set, ft_strlen(s1) - 1, -1);
	len = ft_strlen(s1) - start - len;
	result = ft_substr(s1, start, len);
	return (result);
}
