/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:54:28 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/14 13:54:56 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	long	number;

	number = (long)n;
	if (number < 0)
	{
		number = -number;
		write(fd, "-", 1);
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	digit = number % 10 + '0';
	write(fd, &digit, 1);
}
