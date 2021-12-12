/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaskour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:42:33 by yaskour           #+#    #+#             */
/*   Updated: 2021/12/12 14:49:43 by yaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char *str, va_list ap)
{
	int	length;

	length = 0;
	if (*str == 'p')
	{
		length += ft_putstr_fd("0x", 1);
		length += ft_add(va_arg(ap, unsigned long int), 1, 0);
	}
	if (*str == 'c')
		length += ft_putchar_fd(va_arg(ap, unsigned int), 1);
	if (*str == 's')
		length += ft_putstr_fd(va_arg(ap, char *), 1);
	if (*str == 'd' || *str == 'i')
		length += ft_putnbr_fd(va_arg(ap, int), 1);
	if (*str == 'u')
		length += us_putnbr(va_arg(ap, unsigned int), 1);
	if (*str == 'X')
		length += ft_hex(va_arg(ap, int), 1, 1);
	if (*str == 'x')
		length += ft_hex(va_arg(ap, int), 1, 0);
	if (*str == '%')
		length += ft_putchar_fd('%', 1);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	argp;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(argp, str);
	while (str[i])
	{
		if (str[i] == '%')
			length += check_format((char *)&str[++i], argp);
		else
		{
			while (str[i] != '%' && str[i])
			{
				write(1, &str[i++], 1);
				length += 1;
			}
			continue ;
		}
		i++;
	}
	va_end(argp);
	return (length);
}
