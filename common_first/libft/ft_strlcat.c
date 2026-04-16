/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 00:05:29 by abfilali          #+#    #+#             */
/*   Updated: 2025/04/23 19:22:57 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	d_len = 0;
	while (dst[d_len] && d_len < dstsize)
		d_len++;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (d_len == dstsize)
		return (dstsize + s_len);
	i = 0;
	while (src[i] && (d_len + i + 1) < dstsize)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len + i < dstsize)
		dst[d_len + i] = '\0';
	return (d_len + s_len);
}
