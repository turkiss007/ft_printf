/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:32:49 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:32:50 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_minus_hex(int *count, va_list va)
{
	unsigned int	num;

	num = va_arg(va, unsigned int);
	ft_puthex(num, count, 0);
}
