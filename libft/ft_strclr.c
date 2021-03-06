/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 02:42:53 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 15:26:58 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	x;
	char	*str;

	if (s == NULL)
		return ;
	x = 0;
	str = 0;
	str = s;
	while (str[x] != '\0')
	{
		str[x] = '\0';
		x++;
	}
}
