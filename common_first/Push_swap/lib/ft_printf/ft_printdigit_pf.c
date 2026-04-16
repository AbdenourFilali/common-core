/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigit_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:15:00 by abfilali          #+#    #+#             */
/*   Updated: 2025/05/08 03:57:40 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdigit(long n)
{
	long	nbr;
	int		count;
	char	c;

	count = 0;
	nbr = n;
	if (nbr == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		c = nbr + '0';
		count += write(1, &c, 1);
	}
	else if (nbr > 9)
	{
		count += ft_printdigit(nbr / 10);
		count += ft_printdigit(nbr % 10);
	}
	return (count);
}
