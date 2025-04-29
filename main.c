/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:33:46 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/29 17:22:01 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
/* 	int		len_ft = 0;
	int		len_or = 0;

	ft_printf("\n____________________ TESTING MY PRINT_F __________________\n\n");
	char str[] = "Hello World!";
	len_ft = ft_printf("%s", str);
	ft_printf("\nprinted the string with size: %d\n\n", len_ft);

	char	c = 'z';
	len_ft = ft_printf("%c", c);
	ft_printf("\nprinted a char size: %d\n", len_ft);

	int	number = 42;
	ft_printf("\nprintin decimal number: %d\n", number);

	unsigned int u = -42;
	ft_printf("\nprinting unsigned int: %u\n", u);

	ft_printf("\nprinting percent: %%\n");
	
	int hexa = 42;
	ft_printf("\nprinting hexadecial: %x\n", hexa);
	
	ft_printf("\nprinting pointer:|%p|\n", &hexa);
	
	ft_printf("\n_________________________AMAZING__________________________\n"); */

	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A',
	 "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
}
