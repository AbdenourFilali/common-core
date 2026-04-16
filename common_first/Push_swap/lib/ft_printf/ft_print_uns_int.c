/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 22:07:21 by abfilali          #+#    #+#             */
/*   Updated: 2025/05/08 00:03:54 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uns_int(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n <= 9)
	{
		c = n + '0';
		count += write(1, &c, 1);
	}
	else if (n > 9)
	{
		count += ft_print_uns_int(n / 10);
		count += ft_print_uns_int(n % 10);
	}
	return (count);
}
