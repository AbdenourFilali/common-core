/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 00:07:13 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/23 16:18:03 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hallo, wereld!";
    char dst1[20];
    char dst2[5];
    char dst3[0]; // speciale case

    // Test 1: Genoeg plaats
    size_t ret1 = ft_strlcpy(dst1, src, sizeof(dst1));
    printf("Test 1:\n");
    printf("dst1 = \"%s\"\n", dst1);
    printf("ret1 = %zu\n\n", ret1); // Verwacht: lengte van src

    // Test 2: Te weinig plaats
    size_t ret2 = ft_strlcpy(dst2, src, sizeof(dst2));
    printf("Test 2:\n");
    printf("dst2 = \"%s\"\n", dst2); // Zou slechts een deel van src bevatten
    printf("ret2 = %zu\n\n", ret2); // Verwacht: lengte van src

    // Test 3: dstsize is 0
    size_t ret3 = ft_strlcpy(dst3, src, 0);
    printf("Test 3:\n");
    printf("ret3 = %zu (dst is niet bruikbaar dus geen printf)\n\n", ret3);

    // char std_dst[20];
    // size_t std_ret = strlcpy(std_dst, src, sizeof(std_dst));
    // printf("Standard strlcpy: \"%s\", returned: %zu\n", std_dst, std_ret);

    return 0;
}*/
