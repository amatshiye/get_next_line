/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 23:59:22 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/06 16:32:46 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	x;
	char	*newstr;

	x = 0;
	newstr = (char *)malloc(sizeof(*s1) * ft_strlen((char *)s1) + 1);
	if (newstr == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		newstr[x] = s1[x];
		x++;
	}
	newstr[x] = '\0';
	return (newstr);
}
