/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:30:45 by dakataso          #+#    #+#             */
/*   Updated: 2023/06/13 12:31:03 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ptrlen(uintptr_t num)
{
	size_t	len;

	len = 0;
	while (num)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_printchar(num + '0');
		else
			ft_printchar(num - 10 + 'a');
	}
}

size_t	ft_printptr(void *ptr)
{
	size_t	ptrlen;

	ptrlen = 0;
	if (ptr == NULL)
		ptrlen += ft_printstr("(nil)");
	else
	{
		ptrlen += ft_printstr("0x");
		ft_putptr((uintptr_t)ptr);
		ptrlen += ft_ptrlen((uintptr_t)ptr);
	}
	return (ptrlen);
}
