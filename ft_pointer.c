/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:33:14 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:33:17 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(int *count, va_list va)
{
	void			*ptr;
	unsigned long	addr;

	ptr = va_arg(va, void *);
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		(*count) += 5;
	}
	else
	{
		addr = (unsigned long)ptr;
		ft_putstr_fd("0x", 1);
		(*count) += 2;
		ft_puthex(addr, count, 0);
	}
}
