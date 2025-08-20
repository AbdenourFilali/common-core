/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:56:15 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/24 16:42:58 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
int main()
{
    char data1[] = "Hello, world!";
    char data2[] = "Hello, World!";
    char data3[] = "Hello, world!";

    // Vergelijk gelijkwaardige strings
    int result1 = ft_memcmp(data1, data2, 13);
    // Vergelijk verschillende strings
    int result2 = ft_memcmp(data1, data3, 13);

    printf("Result 1: %d\n", result1); // Verwacht 0 (gelijk)
    printf("Result 2: %d\n", result2); 

    return 0;
}*/
