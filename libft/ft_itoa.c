/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:58:44 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/13 19:59:43 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(long n)
{
	int		size;

	size = 0;
	while (n / 10 != 0)
	{
		size++;
		n /= 10;
	}
	size++;
	return (size);
}

static void	conversion_to_char(char *n_string, long n, int size)
{
	int	i;

	i = size - 1;
	if (n / 10 != 0)
		conversion_to_char(n_string, n / 10, i);
	n_string[i] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	long	ln;
	char	*n_string;
	int		size;

	ln = (long)n;
	size = n_len(ln);
	if (n < 0)
	{
		ln = -ln;
		size++;
	}
	n_string = malloc((size + 1) * sizeof(char));
	if (!n_string)
		return (NULL);
	n_string[0] = '-';
	conversion_to_char(n_string, ln, size);
	n_string[size] = '\0';
	return (n_string);
}
