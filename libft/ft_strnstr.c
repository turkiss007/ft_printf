/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:17:03 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/03 15:17:23 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < len && ft_strlen(little) <= len - i)
	{
		if (ft_strncmp(big + i, little, ft_strlen(little)) == 0)
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
