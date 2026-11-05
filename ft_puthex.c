/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:36:22 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:36:23 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long num, int *count, int mayus)
{
	char	*base;
	char	digit;

	base = "0123456789abcdef";
	if (num / 16 != 0)
		ft_puthex(num / 16, count, mayus);
	digit = base[num % 16];
	if (mayus)
		digit = ft_toupper(digit);
	ft_putchar_fd(digit, 1);
	(*count)++;
}
