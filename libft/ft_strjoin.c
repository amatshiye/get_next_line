/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 22:55:40 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/18 13:01:09 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *dest, const char *src)
{
	int		len;
	char	*tmp;

	if ((src == NULL) || (dest == NULL))
		return (NULL);
	len = (int)ft_strlen(dest) + (int)ft_strlen(src) + 1;
	tmp = (char *)malloc(len);
	if (tmp == NULL)
		return (NULL);
	tmp = ft_strcpy(tmp, dest);
	tmp = ft_strcat(tmp, src);
	return (tmp);
}
