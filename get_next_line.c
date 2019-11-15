/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 13:00:22 by souakrim          #+#    #+#             */
/*   Updated: 2019/01/21 13:02:42 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*read_gnl(char **gnl, char *buf, int fd)
{
	char		*tmp;
	int			ret;

	ret = 1;
	while (!(ft_strchr(*gnl, '\n')) && ret)
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret)
		{
			buf[ret] = '\0';
			tmp = *gnl;
			if (!(*gnl = ft_strjoin(*gnl, buf)))
				return (NULL);
			free(tmp);
		}
	}
	free(buf);
	return (*gnl);
}

char			*stock_line(char **gnl)
{
	char		*stockrest;
	char		*line;
	char		*tmp;

	stockrest = ft_strchr(*gnl, '\n');
	tmp = NULL;
	if (stockrest)
	{
		if (!(line = ft_strsub(*gnl, 0, stockrest - *gnl)))
			return (NULL);
		tmp = *gnl;
		if (!(*gnl = ft_strdup(stockrest + 1)))
			return (NULL);
		free(tmp);
	}
	else if (!(line = ft_strdup(*gnl)))
		return (NULL);
	if (!tmp)
	{
		free(*gnl);
		*gnl = NULL;
	}
	return (line);
}

int				get_next_line(const int fd, char **line)
{
	static char	*gnl = NULL;
	char		*buf;

	if (fd < 0 || !line || BUFF_SIZE <= 0 || !(buf = ft_strnew(BUFF_SIZE + 1)) \
			|| read(fd, buf, 0) == -1 || (gnl == NULL && !(gnl = ft_strnew(0))))
		return (-1);
	if (!(read_gnl(&gnl, buf, fd)))
		return (-1);
	if (*gnl)
	{
		if (!(*line = stock_line(&gnl)))
			return (-1);
		return (1);
	}
	return (0);
}
