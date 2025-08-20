/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:04:31 by abfilali          #+#    #+#             */
/*   Updated: 2025/05/07 21:56:26 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
		return (write(1, "(null)", 6));
	count = 0;
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}
