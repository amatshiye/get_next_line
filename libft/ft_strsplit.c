/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:20:00 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 12:02:25 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *str, char c)
{
	int	wd;
	int	x;

	x = 0;
	wd = 0;
	if (!str)
		return (0);
	while (str[x])
	{
		if (str[x] == c && str[x + 1] != c)
			wd++;
		x++;
	}
	if (str[0] != '\0')
		wd++;
	return (wd);
}

static	char	*ft_wd(const char *str, char c, int *x)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*x] != c && str[*x])
	{
		s[k] = str[*x];
		k++;
		*x += 1;
	}
	s[k] = '\0';
	while (str[*x] == c && str[*x])
		*x += 1;
	return (s);
}

char			**ft_strsplit(const char *str, char c)
{
	int		x;
	int		y;
	int		wrd;
	char	**s;

	if (str == NULL)
		return (NULL);
	x = 0;
	y = 0;
	wrd = ft_count_words(str, c);
	if (!(s = (char **)malloc(sizeof(s) * (wrd + 2))))
		return (NULL);
	while (str[x] == c && str[x])
		x++;
	while (y < wrd && str[x])
	{
		s[y] = ft_wd(str, c, &x);
		y++;
	}
	s[y] = NULL;
	return (s);
}
