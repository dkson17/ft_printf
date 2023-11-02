/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakataso <dakataso@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:53:55 by dakataso          #+#    #+#             */
/*   Updated: 2023/06/02 16:54:53 by dakataso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
    printf("Standard printf:\n");
    printf("Characters: %c\n", 'A');
    printf("String: %s\n", "Hello");
    printf("Pointer: %p\n", (void *)0x12345678);
    printf("Integer: %d\n", 42);
    printf("Unsigned Integer: %u\n", 12345);
    printf("Hexadecimal (lowercase): %x\n", 255);
    printf("Hexadecimal (uppercase): %X\n", 255);
    printf("Percentage: %%\n");
    int n = printf(0);
    printf("%d\n", n);
    printf("%li\n", -2147483648);
    printf("%p\n", NULL);
    printf("\n");

    ft_printf("Custom ft_printf:\n");
    ft_printf("Characters: %c\n", 'A');
    ft_printf("String: %s\n", "Hello");
    ft_printf("Pointer: %p\n", (void *)0x12345678);
    ft_printf("Integer: %d\n", 42);
    ft_printf("Unsigned Integer: %u\n", 12345);
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Hexadecimal (uppercase): %X\n", 255);
    ft_printf("Percentage: %%\n");
    int a = ft_printf(0);
    printf("%d\n", a);
    ft_printf("%i\n", -2147483648);
    ft_printf("%p\n", NULL);

    return 0;
}
