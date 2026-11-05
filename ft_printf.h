/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:38:42 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/28 15:38:44 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//INCLUDES
# include "libft/libft.h"
# include <stdarg.h>

//PROTOTIPES
int		ft_printf(char const *array, ...);
void	ft_porcentage(int *count, char c);
void	ft_char(int *count, va_list va);
void	ft_string(int *count, va_list va);
void	ft_int(int *count, va_list va);
void	ft_unsigned_int(int *count, va_list va);
void	ft_pointer(int *count, va_list va);
void	ft_puthex(unsigned long num, int *count, int mayus);
void	ft_minus_hex(int *count, va_list va);
void	ft_mayus_hex(int *count, va_list va);
#endif
