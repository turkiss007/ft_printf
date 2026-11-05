/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mayus_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:32:22 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:32:23 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_mayus_hex(int *count, va_list va)
{
	unsigned int	num;

	num = va_arg(va, unsigned int);
	ft_puthex(num, count, 1);
}
