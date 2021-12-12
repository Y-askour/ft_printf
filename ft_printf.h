/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaskour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:53:14 by yaskour           #+#    #+#             */
/*   Updated: 2021/12/12 14:40:25 by yaskour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int				ft_printf(const char *str, ...);
unsigned int	us_putnbr(unsigned int n, int fd);
int				ft_hex(unsigned int n, int fd, int i);
int				ft_add(unsigned long int n, int fd, int i);
#endif
