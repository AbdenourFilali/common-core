/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 23:09:39 by abfilali          #+#    #+#             */
/*   Updated: 2025/05/08 03:35:27 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_format(const char *format, int i, va_list args)
{
	if (format[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_printdigit(va_arg(args, int)));
	else if (format[i] == 'u')
		return (ft_print_uns_int(va_arg(args, unsigned int)));
	else if (format[i] == 'x')
		return (ft_print_hex_lower(va_arg(args, unsigned int)));
	else if (format[i] == 'X')
		return (ft_print_hex_upper(va_arg(args, unsigned int)));
	else if (format[i] == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (format[i] == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_format(format, i, args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
int	main(void)
{
	//int		x = 42;
	//void	*ptr = &x;
	//int		count;

	ft_printf("%d\n", -2147483648);
	printf("%d\n", -2147483648);
	// Test met geldig adres
	//count = ft_printf("ft_printf: %p\n", ptr);
	//printf(" -> chars written: %d\n", count);

	//count = printf("printf:    %p\n", ptr);
	//printf(" -> chars written: %d\n", count);

	// Test met NULL
	//ptr = NULL;

	//count = ft_printf("ft_printf: %p\n", ptr);
	//printf(" -> chars written: %d\n", count);

	//count = printf("printf:    %p\n", ptr);
	//printf(" -> chars written: %d\n", count);

	return (0);

}
*/
