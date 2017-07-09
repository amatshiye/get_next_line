/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 16:07:22 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 10:21:10 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	x;

	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	x = 0;
	while (s1[x] || s2[x])
	{
		if ((s1[x] != s2[x]) && n > x)
			return (0);
		x++;
	}
	return (1);
}
