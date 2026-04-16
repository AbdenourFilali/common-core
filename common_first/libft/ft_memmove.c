/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:56:54 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/23 16:20:29 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50] = "Hello, World!";
    printf("Test 1 - Before memmove: %s\n", str1);
    ft_memmove(str1 + 7, str1, 5);  // Kopieer 'Hello' naar het einde
    printf("Test 1 - After memmove : %s\n", str1);  // Verwacht: "Hello, Hello!"

    // Test 2: Overlap (src vóór dest)
    char str2[50] = "1234567890";
    printf("Test 2 - Before memmove: %s\n", str2);
    ft_memmove(str2 + 2, str2, 5);  // Kopieer '12345' naar str2 + 2
    printf("Test 2 - After memmove : %s\n", str2);  // Verwacht: "121234567890"

    // Test 3: Overlap (src ná dest)
    char str3[50] = "abcdef";
    printf("Test 3 - Before memmove: %s\n", str3);
    ft_memmove(str3 + 2, str3, 4);  // Kopieer 'abcd' naar str3 + 2
    printf("Test 3 - After memmove : %s\n", str3);  // Verwacht: "ababcd"

    // Test 4: Zelfde geheugenadres (geen kopie)
    char str4[50] = "Testing self-move";
    printf("Test 4 - Before memmove: %s\n", str4);
    ft_memmove(str4, str4 + 8, 5);  // Kopieer van binnen hetzelfde stringgebied
    printf("Test 4 - After memmove : %s\n", str4);  // Verwacht: "self-move"

    // Vergelijking met standaard memmove
    char str5[50] = "abcdefg";
	char str6[50] = "abcdefg";
    memmove(str5 + 3, str5, 4);
    printf("Standard memmove comparison: %s\n", str5);
	ft_memmove(str6 + 3, str6, 4);
    printf("niet Standard memmove comparison: %s\n", str6);

	
	return 0;
}*/
