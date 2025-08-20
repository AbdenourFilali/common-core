/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 23:20:17 by abfilali          #+#    #+#             */
/*   Updated: 2025/05/08 00:02:10 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_lower(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n < 16)
	{
		if (n < 10)
			c = n + '0';
		else
			c = 'a' + (n - 10);
		count += write(1, &c, 1);
	}
	else
	{
		count += ft_print_hex_lower(n / 16);
		count += ft_print_hex_lower(n % 16);
	}
	return (count);
}

int	ft_print_hex_upper(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n < 16)
	{
		if (n < 10)
			c = n + '0';
		else
			c = 'A' + (n - 10);
		count += write(1, &c, 1);
	}
	else
	{
		count += ft_print_hex_upper(n / 16);
		count += ft_print_hex_upper(n % 16);
	}
	return (count);
}
