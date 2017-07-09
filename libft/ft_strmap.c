/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 00:55:28 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 01:54:45 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*newstr;
	int		x;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	x = 0;
	if (s && f)
	{
		newstr = (char *)malloc(sizeof(*s) * ft_strlen((void *)s) + 1);
		if (newstr == NULL)
			return (NULL);
		while (s[x] != 0)
		{
			newstr[x] = f(s[x]);
			x++;
		}
		newstr[x] = '\0';
		return (newstr);
	}
	return (NULL);
}
