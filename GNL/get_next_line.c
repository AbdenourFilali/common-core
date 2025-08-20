/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abfilali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:48:57 by abfilali          #+#    #+#             */
/*   Updated: 2025/05/29 21:16:58 by abfilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_until_newline(int fd, char *stash)
{
	char	*buf;
	char	*tmp;
	int		bytes_read;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 1)
			break ;
		buf[bytes_read] = '\0';
		tmp = ft_strjoin(stash, buf);
		if (!tmp)
			{
				free(buf);
				free(stash);
				return (NULL);
			}
		free(stash);
		stash = tmp;
	}
	free(buf);
	return (stash);
}

static char	*allocate_line(char *stash, int i)
{
	if (stash[i] == '\n')
		return (malloc(i + 2));
	return (malloc(i + 1));
}

static char	*extract_line(char *stash)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	line = allocate_line(stash, i);
	if (!line)
		return (NULL);
	j = 0;
	while (i > j)
	{
		line[j] = stash[j];
		j++;
	}
	if (stash[i] == '\n')
	{
		line[j++] = '\n';
		line[j] = '\0';
	}
	else if (stash[i] == '\0')
		line[j] = '\0';
	return (line);
}

static char	*remove_extracted(char *stash, int len_line, int len_stash)
{
	int		i;
	int		j;
	char	*rest_stash;

	i = len_stash - len_line;
	rest_stash = (char *)malloc(i + 1);
	j = 0;
	while (stash[len_line + j] != '\0')
	{
		rest_stash[j] = stash[len_line + j];
		j++;
	}
	rest_stash[j] = '\0';
	return (rest_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	int			len_line;
	int			len_stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_until_newline(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	len_line = ft_strlen(line);
	len_stash = ft_strlen(stash);
	stash = remove_extracted(stash, len_line, len_stash);
	return (line);
}
/*
int	main(void)
{
	int	fd;
	char	*s;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	s = get_next_line(fd);
	while (s)
	{	
		printf("%s", s);
		free(s);
		s = get_next_line(fd);
	}
}*/
