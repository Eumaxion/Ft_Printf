/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignmb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:35:09 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/29 17:28:42 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbmr_size(unsigned int n);

int	ft_unsignmb(unsigned int n)
{
	int				total;
	char			number;

	total = 0;
	if (n > 9)
		total += ft_unsignmb(n / 10);
	number = ((n % 10) + '0');
	write(1, &number, 1);
	total++;
	return (total);
}
