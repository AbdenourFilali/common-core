/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:21:48 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/26 18:55:46 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	sublen;
	char	*trimmed;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	j = len - 1;
	while (j > i && is_set(s1[j], set))
		j--;
	sublen = j - i;
	trimmed = (char *)malloc(sizeof(char) * (sublen + 2));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, sublen + 1);
	trimmed[sublen + 1] = '\0';
	return (trimmed);
}
/*
int main()
{
    const char *str = "   ***Hello World!***  ";
    const char *set = " *";  // Verwijder spaties en sterretjes (*)
    
    char *result = ft_strtrim(str, set);
    
    if (result)
    {
        printf("Original string: \"%s\"\n", str);
        printf("Trimmed string: \"%s\"\n", result);
        free(result);  // Vergeet niet de geheugen vrij te geven na gebruik!
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}*/