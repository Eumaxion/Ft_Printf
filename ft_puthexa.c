/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:39:57 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/29 17:14:15 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbmr_size(unsigned int n);

int	ft_puthexa(int n, char c)
{
	unsigned int	number;
	unsigned int	size;
	char			*base_low;
	char			*base_upper;

	number = 0;
	size = 0;
	base_low = "0123456789abcdef";
	base_upper = "0123456789ABCDEF";
	number = (unsigned int) n;
	size = nbmr_size(number);
	if (number >= 16)
		ft_puthexa(number / 16, c);
	number = number % 16;
	if (c == 'x')
		write(1, &base_low[number], 1);
	else
		write(1, &base_upper[number], 1);
	return (size);
}

static int	nbmr_size(unsigned int n)
{
	int	size;

	size = 1;
	while (n / 16)
	{
		size++;
		n /= 16;
	}
	return (size);
}
