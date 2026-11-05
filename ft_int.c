/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:32:09 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:32:11 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_itoa_write(long n, int *count)
{
	char	digit;

	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', 1);
		(*count)++;
	}
	if (n / 10 != 0)
		ft_itoa_write(n / 10, count);
	digit = n % 10 + '0';
	ft_putchar_fd(digit, 1);
	(*count)++;
}

void	ft_int(int *count, va_list va)
{
	int		num;

	num = va_arg(va, int);
	ft_itoa_write(num, count);
}
