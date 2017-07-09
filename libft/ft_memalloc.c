/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:26:16 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 10:21:47 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*newstr;

	newstr = (void *)malloc(sizeof(void *) * size);
	if (newstr == NULL)
		return (NULL);
	ft_bzero(newstr, size);
	return (newstr);
}
