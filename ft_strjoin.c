/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 13:14:36 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/05 15:07:47 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	int		c;
	char	*d;

	a = -1;
	if (!s1 || !s2)
		return (NULL);
	b = ft_strlen((char*)s1);
	c = ft_strlen((char*)s2);
	d = (char *)malloc(sizeof(char) * (b + c + 1));
	if (d == NULL)
		return (NULL);
	while (s1[++a])
	{
		d[a] = s1[a];
	}
	a = -1;
	while (s2[++a])
	{
		d[b] = s2[a];
		b++;
	}
	d[b] = '\0';
	return (d);
}
