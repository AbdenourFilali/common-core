/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 00:16:40 by abfilali          #+#    #+#             */
/*   Updated: 2025/05/08 03:36:22 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *p)
{
	unsigned long long	ptr;
	int					count;

	ptr = (unsigned long long)p;
	count = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_print_hex_ptr(ptr);
	return (count);
}

int	ft_print_hex_ptr(unsigned long long n)
{
	char	c;
	int		count;

	count = 0;
	if (n < 16)
	{
		if (n < 10)
		{
			c = '0' + n;
			count += write(1, &c, 1);
		}
		else
		{
			c = 'a' + (n - 10);
			count += write(1, &c, 1);
		}
	}
	else
	{
		count += ft_print_hex_ptr(n / 16);
		count += ft_print_hex_ptr(n % 16);
	}
	return (count);
}
