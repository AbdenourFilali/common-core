/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:37:02 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/23 19:49:38 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	const char  *str = "campus19";
	char        *result;


	result = ft_strchr(str, '9');
	if (result)
		printf("Gevonden: '%c' op positie: %ld\n", *result, result - str);
	else
		printf("Niet gevonden!\n");
}*/