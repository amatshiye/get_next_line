/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 14:42:50 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/10 14:37:31 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	str2_len;

	if (*s2 == 0)
		return ((char *)s1);
	str2_len = ft_strlen(s2);
	while (*s1)
		if (ft_memcmp(s1++, s2, str2_len) == 0)
			return ((char *)s1 - 1);
	return (0);
}
