/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:53:30 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/24 15:38:03 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	k;
	unsigned char	*str;

	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (n-- > 0)
	{
		if (*str == k)
			return (str);
		str++;
	}
	return (0);
}
/*
int	main()
{
	char data[] = "hello world";
	char	*result;
	result = ft_memchr(data, 'o', 11);
	if (result)
		printf("Gevonden 'o' bij: %s\n", result);
	else
		printf("'o' niet gevonden\n");
	result = ft_memchr(data, ' ', 11);
	if (result)
		printf("Gevonden spatie bij: %s\n", result);
	else
		printf("Spatie niet gevonden\n");	
}*/
