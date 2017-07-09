/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 00:06:39 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/09 13:33:20 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			x;

	chr = (unsigned char)c;
	str = (unsigned char *)s;
	x = 0;
	while (n > x)
	{
		if (str[x] == chr)
			return (str + x);
		x++;
	}
	return (0);
}
