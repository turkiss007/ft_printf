/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:33:48 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:33:50 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	checks(char c, int *count, va_list va)
{
	if (c == '%')
		ft_porcentage(count, c);
	else if (c == 'c')
		ft_char(count, va);
	else if (c == 's')
		ft_string(count, va);
	else if (c == 'd' || c == 'i')
		ft_int(count, va);
	else if (c == 'u')
		ft_unsigned_int(count, va);
	else if (c == 'p')
		ft_pointer(count, va);
	else if (c == 'x')
		ft_minus_hex(count, va);
	else if (c == 'X')
		ft_mayus_hex(count, va);
}

int	ft_printf(char const *array, ...)
{
	va_list	va;
	int		count;

	va_start(va, array);
	count = 0;
	if (!array)
		return (-1);
	while (*array)
	{
		if (*array != '%')
		{
			ft_putchar_fd(*array, 1);
			count++;
		}
		else
		{
			array++;
			checks(*array, &count, va);
		}
		array++;
	}
	va_end(va);
	return (count);
}
