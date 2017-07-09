/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 00:26:10 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 09:47:33 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	x;

	newstr = (char *)malloc(size + 1);
	if (newstr == NULL)
		return (NULL);
	x = 0;
	while (x < size)
	{
		newstr[x] = '\0';
		x++;
	}
	newstr[x] = '\0';
	return (newstr);
}
