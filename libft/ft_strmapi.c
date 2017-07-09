/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 02:38:53 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 03:02:14 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	x;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	if (s && f)
	{
		x = 0;
		newstr = (char *)malloc(sizeof(*s) * ft_strlen((char *)s) + 1);
		if (newstr == NULL)
			return (NULL);
		while (s[x] != 0)
		{
			newstr[x] = f(x, s[x]);
			x++;
		}
		newstr[x] = '\0';
		return (newstr);
	}
	return (NULL);
}
