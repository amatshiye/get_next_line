/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 09:13:01 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 09:23:03 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	x;

	if (s == NULL)
		return (NULL);
	sub = (char *)malloc(sizeof(*sub) * (len + 1));
	if (sub == NULL)
		return (NULL);
	x = 0;
	while (x < len)
	{
		sub[x] = s[start + x];
		x++;
	}
	sub[x] = '\0';
	return (sub);
}
