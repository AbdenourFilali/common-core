/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:06:13 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/30 22:21:25 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(int n)
{
	int	len;

	len = (n <= 0);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = (long)n;
	len = get_num_length(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len--)
	{
		str[len] = '0' + (nb % 10);
		nb /= 10;
		if (len == 0 && n < 0)
			str[0] = '-';
	}
	return (str);
}
/*
#include <limits.h>
int main(void)
{
    char *res;

    res = ft_itoa(0);
    printf("Test 0           : %s\n", res);
    free(res);
    res = ft_itoa(42);
    printf("Test 42          : %s\n", res);
    free(res);

    res = ft_itoa(123456);
    printf("Test 123456      : %s\n", res);
    free(res);

    res = ft_itoa(-2147483648);
    printf("Test -9999       : %s\n", res);
    free(res);

    res = ft_itoa(INT_MIN);
    printf("Test INT_MIN     : %s\n", res);
    free(res);

    res = ft_itoa(INT_MAX);
    printf("Test INT_MAX     : %s\n", res);
    free(res);

    res = ft_itoa(-1000000000);
    printf("Test -1e9        : %s\n", res);
    free(res);

    res = ft_itoa(1000000000);
    printf("Test +1e9        : %s\n", res);
    free(res);

    return 0;
}
*/