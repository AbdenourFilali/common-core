/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:03:26 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/26 18:15:56 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, s1_len);
	ft_memcpy(new + s1_len, s2, s2_len);
	new[s1_len + s2_len] = '\0';
	return (new);
}
/*
int main()
{
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    char *result;

    // Test ft_strjoin
    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Result of ft_strjoin: %s\n", result);
        free(result);  // 
    }
    else
    {
        printf("Error: ft_strjoin returned NULL\n");
    }

    return 0;
}*/
