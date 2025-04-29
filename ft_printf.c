/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:51:20 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/29 17:33:57 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	find_format(va_list s, char c);

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + i])
		{
			i++;
			total += find_format(arg, format[i]);
		}
		else
			total += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (total);
}

static int	find_format(va_list s, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(s, int)));
	if (c == 's')
		return (ft_putstr(va_arg(s, char *)));
	if (c == 'd')
		return (ft_putnmb(va_arg(s, int)));
	if (c == 'i')
		return (ft_putnmb(va_arg(s, int)));
	if (c == 'u')
		return (ft_unsignmb(va_arg(s, unsigned int)));
	if (c == 'p')
		return (ft_putpointer(va_arg(s, unsigned long)));
	if (c == 'x' || c == 'X')
		return (ft_puthexa(va_arg(s, int), c));
	else
		return (ft_putchar(c));
}
