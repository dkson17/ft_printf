/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:08:18 by dakataso          #+#    #+#             */
/*   Updated: 2023/06/06 16:25:11 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_printstr(char *str)
{
	size_t	counter;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	counter = 0;
	while (*str)
	{
		write(1, str++, 1);
		counter++;
	}
	return (counter);
}

size_t	ft_printnbr(int n)
{
	size_t	len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_strlen(num);
	ft_printstr(num);
	free(num);
	return (len);
}
