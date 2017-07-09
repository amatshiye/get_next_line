/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:24:38 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/07 22:49:07 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	x;
	int		y;

	x = 0;
	y = ft_strlen(dst);
	while (src[x] != '\0' && n > x)
	{
		dst[y] = src[x];
		y++;
		x++;
	}
	dst[y] = '\0';
	return (dst);
}
