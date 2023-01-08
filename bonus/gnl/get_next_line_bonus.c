/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:38:03 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/01/09 00:18:35 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

static char	*before(char *buffer)
{
	char			*split;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!(*buffer))
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i ++;
	if (buffer[i] == '\n')
		i ++;
	split = malloc((i + 1) * sizeof(char));
	if (!split)
		return (NULL);
	while (j < i)
	{
		split[j] = buffer[j];
		j ++;
	}
	split[j] = '\0';
	return (split);
}

static char	*after(char *buffer)
{
	char			*split;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i ++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	i ++;
	split = malloc((ft_strlen(buffer) - i + 1) * sizeof(char));
	if (!split)
		return (NULL);
	while (buffer[i])
		split[j++] = buffer[i++];
	split[j] = '\0';
	free(buffer);
	return (split);
}

char	*get_line(int fd, char *save)
{
	char	*buffer;
	int		readed;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	readed = 1;
	while (!ft_strchr(save, '\n') && readed != 0)
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[readed] = '\0';
		if (!save)
			save = ft_strdup(buffer);
		else
			save = ft_strjoin(save, buffer);
	}
	free(buffer);
	return (save);
}

char	*get_next_line(int fd)
{
	static char	*save[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	save[fd] = get_line(fd, save[fd]);
	if (!save[fd])
		return (NULL);
	line = before(save[fd]);
	save[fd] = after(save[fd]);
	return (line);
}
