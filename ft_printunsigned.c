/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:09:47 by dakataso          #+#    #+#             */
/*   Updated: 2023/06/13 13:14:21 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_numlen(unsigned int num)
{
	size_t	len;

	len = 0;
	while (num)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int nbr)
{
	char	*num;
	size_t	len;

	len = ft_numlen(nbr);
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (nbr)
	{
		num[len - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		len--;
	}
	return (num);
}

size_t	ft_printunbr(unsigned int nbr)
{
	size_t	ulen;
	char	*num;

	ulen = 0;
	if (nbr == 0)
		ulen += ft_printchar('0');
	else
	{
		num = ft_uitoa(nbr);
		ulen += ft_printstr(num);
		free(num);
	}
	return (ulen);
}
