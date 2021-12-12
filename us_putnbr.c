/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaskour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:09:50 by yaskour           #+#    #+#             */
/*   Updated: 2021/12/12 13:02:09 by yaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	us_putnbr(unsigned int n, int fd)
{
	int	length;

	length = 0;
	if (n >= 10)
	{
		length += ft_putnbr_fd(n / 10, fd);
		length += ft_putnbr_fd(n % 10, fd);
	}
	else
		length += ft_putchar_fd(n + '0', fd);
	return (length);
}
