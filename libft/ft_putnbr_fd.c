/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaskour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:07:04 by yaskour           #+#    #+#             */
/*   Updated: 2021/12/12 12:53:37 by yaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	length;

	length = 0;
	if (n < 0)
	{
		length += ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			length += ft_putchar_fd('2', fd);
			n %= 1000000000;
		}
		n = -n;
	}
	if (n >= 10)
	{
		length += ft_putnbr_fd(n / 10, fd);
		length += ft_putnbr_fd(n % 10, fd);
	}
	else
		length += ft_putchar_fd(n + '0', fd);
	return (length);
}
