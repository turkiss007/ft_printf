/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:31:48 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:31:49 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char(int *count, va_list va)
{
	char	c;

	c = (unsigned char)va_arg(va, int);
	ft_putchar_fd(c, 1);
	(*count)++;
}
