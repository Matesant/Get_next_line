/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:08:42 by matesant          #+#    #+#             */
/*   Updated: 2023/09/04 11:13:13 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*check_read_errors(ssize_t read_bytes, char *line_buffer,
		char *new_line)
{
	if (read_bytes < 0 || (read_bytes == 0 && !*new_line))
	{
		free(line_buffer);
		free(new_line);
		return (NULL);
	}
	return (new_line);
}

static char	*ft_get_new_line(int fd, char *new_line)
{
	char	*line_buffer;
	ssize_t	read_bytes;

	line_buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line_buffer)
		return (NULL);
	if (!new_line)
		new_line = ft_strdup("");
	read_bytes = 1;
	while ((!ft_strchr(new_line, '\n')) && read_bytes)
	{
		read_bytes = read(fd, line_buffer, BUFFER_SIZE);
		new_line = check_read_errors(read_bytes, line_buffer, new_line);
		if (!new_line)
			return (NULL);
		line_buffer[read_bytes] = '\0';
		new_line = ft_strjoin(new_line, line_buffer);
	}
	free(line_buffer);
	return (new_line);
}

static char	*ft_make_new_line(char *content_line)
{
	char	*line_position;
	char	*new_line;
	size_t	line_size;

	line_position = ft_strchr(content_line, '\n');
	if (line_position == NULL)
		return (ft_strdup(content_line));
	else
		line_size = ((line_position - content_line) + 2);
	new_line = malloc(line_size);
	ft_strlcpy(new_line, content_line, line_size);
	return (new_line);
}

static char	*ft_update_after_new_line(char *line_to_update)
{
	char	*line_position;
	char	*rest_of_the_line;

	line_position = ft_strchr(line_to_update, '\n');
	if (line_position == NULL)
	{
		free(line_to_update);
		return (NULL);
	}
	rest_of_the_line = ft_strdup(line_position + 1);
	free(line_to_update);
	return (rest_of_the_line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*next_line[1024];

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	next_line[fd] = ft_get_new_line(fd, next_line[fd]);
	if (next_line[fd] == NULL)
		return (NULL);
	line = ft_make_new_line(next_line[fd]);
	next_line[fd] = ft_update_after_new_line(next_line[fd]);
	return (line);
}
