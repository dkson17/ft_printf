/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:41:07 by dakataso          #+#    #+#             */
/*   Updated: 2023/05/30 13:42:41 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
size_t	ft_printchar(int c);
size_t	ft_printstr(char *str);
size_t	ft_printnbr(int n);
int		ft_hexlen(unsigned long long num);
void	ft_puthex(unsigned long long num, const char specifier);
int		ft_printhex(unsigned long long num, const char specifier);
size_t	ft_ptrlen(uintptr_t num);
void	ft_putptr(uintptr_t num);
size_t	ft_printptr(void *ptr);
size_t	ft_numlen(unsigned int num);
char	*ft_uitoa(unsigned int nbr);
size_t	ft_printunbr(unsigned int nbr);

#endif
