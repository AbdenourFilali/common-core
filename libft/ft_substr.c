/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:31:36 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/26 16:44:18 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*help_func(char *new, const char *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start + i] && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		new = (char *)malloc(1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	if (len > (s_len - start))
		len = s_len - start;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	new = help_func(new, s, start, len);
	return (new);
}
/*
int main(void)
{
    char *str = "Hello, world!";
    char *sub;

    // Test 1: Normale substring
    sub = ft_substr(str, 7, 5); // verwacht "world"
    printf("Test 1: %s\n", sub);
    free(sub);

    // Test 2: Start groter dan lengte van string
    sub = ft_substr(str, 20, 5); // verwacht lege string ""
    printf("Test 2: %s\n", sub);
    free(sub);

    // Test 3: Lengte groter dan wat beschikbaar is
    sub = ft_substr(str, 7, 50); // verwacht "world!"
    printf("Test 3: %s\n", sub);
    free(sub);

    // Test 4: Substring van lengte 0
    sub = ft_substr(str, 5, 0); // verwacht lege string ""
    printf("Test 4: %s\n", sub);
    free(sub);

    // Test 5: Hele string kopiëren
    sub = ft_substr(str, 0, ft_strlen(str)); // verwacht "Hello, world!"
    printf("Test 5: %s\n", sub);
    free(sub);

    return 0;
}*/