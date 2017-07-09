/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 20:54:03 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/07 21:31:16 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (n)
	{
		dest = (unsigned char *)dst;
		source = (const unsigned char *)src;
		while (n-- != 0)
			if ((*dest++ = *source++) == (unsigned char)c)
				return (dest);
	}
	return (0);
}
