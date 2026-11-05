/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:37:22 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:37:24 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_unsigned_itoa(unsigned int n, int *count)
{
	char	digit;

	if (n / 10 != 0)
		ft_unsigned_itoa(n / 10, count);
	digit = n % 10 + '0';
	ft_putchar_fd(digit, 1);
	(*count)++;
}

void	ft_unsigned_int(int *count, va_list va)
{
	unsigned int	num;

	num = va_arg(va, unsigned int);
	ft_unsigned_itoa(num, count);
}
