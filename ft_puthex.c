/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbinary <fbinary@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:08:37 by fbinary           #+#    #+#             */
/*   Updated: 2022/01/14 17:24:19 by fbinary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_ul_length(unsigned long number)
{
	int	i;

	if (!number)
		return (1);
	i = 0;
	while (number)
	{
		number /= 16;
		i++;
	}
	return (i);
}

int	ft_puthex(unsigned long number, int is_pointer)
{
	char	*hex_string;
	int		length;
	int		counter;

	length = get_ul_length(number);
	hex_string = (char *) malloc(length + 1);
	if (!hex_string)
		return (0);
	hex_string[length--] = '\0';
	if (!number)
		hex_string[length--] = '0';
	while (number)
	{
		if (number % 16 < 10)
			hex_string[length--] = number % 16 + 48;
		else
			hex_string[length--] = number % 16 % 10 + 97;
		number /= 16;
	}
	counter = 0;
	if (is_pointer)
		counter += ft_putstr_fd("0x");
	counter += ft_putstr_fd(hex_string);
	free(hex_string);
	return (counter);
}

int	ft_puthex_up(unsigned long number, int is_pointer)
{
	char	*hex_string;
	int		length;
	int		counter;

	length = get_ul_length(number);
	hex_string = (char *) malloc(length + 1);
	if (!hex_string)
		return (0);
	hex_string[length--] = '\0';
	if (!number)
		hex_string[length--] = '0';
	while (number)
	{
		if (number % 16 < 10)
			hex_string[length--] = number % 16 + 48;
		else
			hex_string[length--] = number % 16 % 10 + 65;
		number /= 16;
	}
	counter = 0;
	if (is_pointer)
		counter += ft_putstr_fd("0x");
	counter += ft_putstr_fd(hex_string);
	free(hex_string);
	return (counter);
}
