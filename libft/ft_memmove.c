/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 19:03:46 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/05 19:04:16 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 1;
	while (i <= n)
	{
		if (dest > src)
			((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
		else if (dest < src)
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
		i++;
	}
	return (dest);
}
