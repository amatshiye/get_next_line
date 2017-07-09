/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 13:31:43 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/25 17:22:42 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#define L_TEST 50000
#define EMPTY_STR ""

static char	*get_line(char *buff, int *ret, char **left, char *send)
{
	char	*tmp;

	tmp = send;
	*ret = -1;
	if (tmp == NULL)
		tmp = ft_strnew(L_TEST);
	if (ft_strchr(buff, '\n') == NULL)
		return (ft_strcat(tmp, buff));
	*ret = ft_strchr(buff, '\n') - buff;
	if (*ret == 0)
		ft_strcat(tmp, EMPTY_STR);
	else
		ft_strncat(tmp, buff, *ret);
	(*left) = ft_strsub(buff, (*ret + 1), ft_strlen(buff));
	return (tmp);
}

int			get_next_line(const int fd, char **line)
{
	int				ret;
	static char		*left[1000];
	char			buff[BUFF_SIZE + 1];

	if (BUFF_SIZE <= 0 || fd < 0 || line == NULL)
		return (-1);
	*(line) = NULL;
	if (left[fd] != NULL)
	{
		(*line) = get_line(left[fd], &ret, &left[fd], (*line));
		if (ret != -1)
			return (1);
		if (left[fd] != NULL)
			ft_memdel((void**)&left[fd]);
	}
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		(*line) = get_line(buff, &ret, &left[fd], (*line));
		if (ret != -1)
			return (1);
	}
	return (ft_strlen(*line) > 0 && ret >= 0) ? 1 : ret;
}
