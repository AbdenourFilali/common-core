/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:54:56 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/23 20:04:37 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	const char *str = "campus1p9";
	char *result;
	result = ft_strrchr(str, 'p');
	if (result)
		printf("Gevonden: '%c' op positie: %ld\n", *result, result - str);
	else
		printf("Niet gevonden!\n");

	    result = ft_strrchr(str, 'z');
    if (result)
        printf("Gevonden: '%c'\n", *result);
    else
        printf("'z' niet gevonden\n");
}*/