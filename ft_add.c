/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaskour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:41:51 by yaskour           #+#    #+#             */
/*   Updated: 2021/12/12 14:47:20 by yaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_add(unsigned long int n, int fd, int i)
{
	int		length;
	char	base[17];

	length = 0;
	if (i == 1)
		ft_strlcpy(base, "0123456789ABCDEF", 17);
	if (i == 0)
		ft_strlcpy(base, "0123456789abcdef", 17);
	if (n < 0)
	{
		length += ft_putchar_fd('-', fd);
		ft_add(-n, fd, i);
	}
	if (n >= 16)
	{
		length += ft_add(n / 16, fd, i);
		length += ft_add(n % 16, fd, i);
	}
	else
		length += ft_putchar_fd(base[n], fd);
	return (length);
}
