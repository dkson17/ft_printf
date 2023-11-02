/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:00:25 by dakataso          #+#    #+#             */
/*   Updated: 2023/06/02 10:40:56 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_converse(char specifier, va_list args)
{
	size_t	char_counter;

	char_counter = 0;
	if (specifier == 'c')
		char_counter = ft_printchar(va_arg(args, int));
	else if (specifier == 's')
		char_counter = ft_printstr(va_arg(args, char *));
	else if (specifier == 'p')
		char_counter = ft_printptr(va_arg(args, void *));
	else if (specifier == 'd' || specifier == 'i')
		char_counter = ft_printnbr(va_arg(args, int));
	else if (specifier == 'u')
		char_counter = ft_printunbr(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		char_counter = ft_printhex(va_arg(args, unsigned int), specifier);
	else if (specifier == '%')
		char_counter = ft_printchar('%');
	return (char_counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	char_count;

	if (!format)
		return (-1);
	va_start(args, format);
	char_count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			char_count += ft_converse(*++format, args);
			format++;
		}
		else
			char_count += ft_printchar(*format++);
	}
	va_end(args);
	return (char_count);
}
