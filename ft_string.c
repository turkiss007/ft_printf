/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:37:03 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:37:08 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string(int *count, va_list va)
{
	char	*str;

	str = va_arg(va, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		(*count) += 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		(*count) += ft_strlen(str);
	}
}
