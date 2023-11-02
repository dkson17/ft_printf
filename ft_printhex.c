/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:57:18 by dakataso          #+#    #+#             */
/*   Updated: 2023/06/13 10:00:18 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_puthex(unsigned long long num, const char specifier)
{
	char	*hex_digits_lower;
	char	*hex_digits_upper;
	char	hex_string[17];
	int		j;
	char	*hex_digits;

	hex_digits_lower = "0123456789abcdef";
	hex_digits_upper = "0123456789ABCDEF";
	j = 0;
	if (specifier == 'x')
		hex_digits = hex_digits_lower;
	else if (specifier == 'X')
		hex_digits = hex_digits_upper;
	while (num > 0)
	{
		hex_string[j++] = hex_digits[num % 16];
		num /= 16;
	}
	while (j > 0)
		ft_printchar(hex_string[--j]);
}

int	ft_printhex(unsigned long long num, const char specifier)
{
	if (num == 0)
	{
		ft_printchar('0');
		return (1);
	}
	else
		ft_puthex(num, specifier);
	return (ft_hexlen(num));
}
