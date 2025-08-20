/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:04:41 by abfilali          #+#    #+#             */
/*   Updated: 2025/06/08 17:39:20 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			k;

	k = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == k)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == k)
		return ((char *)&s[i]);
	return (NULL);
}

static char	*read_until_line(int fd, char *stash, char *buf)
{
	char	*tmp;
	ssize_t	bytes;

	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(stash);
			return (NULL);
		}
		else if (bytes == 0)
			break ;
		buf[bytes] = '\0';
		if (!stash)
			stash = ft_strdup("");
		tmp = stash;
		stash = ft_strjoin(tmp, buf);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (stash);
}

static char	*set_line_and_stash(char *line )
{
	char	*stash;
	ssize_t	i;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (NULL);
	stash = ft_substr(line, (i + 1), (ft_strlen(line) - i));
	if (stash[0] == '\0')
	{
		free(stash);
		stash = NULL;
	}
	line[i + 1] = '\0';
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buf;

	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(stash);
		free(buf);
		stash = NULL;
		buf = NULL;
		return (NULL);
	}
	if (!buf)
		return (NULL);
	line = read_until_line(fd, stash, buf);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	stash = set_line_and_stash(line);
	return (line);
}
