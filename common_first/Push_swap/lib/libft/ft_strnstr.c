/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:15:26 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/24 16:41:47 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && little[j] && (i + j) < len)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/*

int main()
{
    char haystack[] = "Hello, World!";
    char needle[] = "World";
    size_t len = 13;

    char *result = ft_strnstr(haystack, needle, len);

    if (result)
        printf("Found: %s\n", result); // Verwacht "World!"
    else
        printf("Not found\n");

    return 0;
}*/
