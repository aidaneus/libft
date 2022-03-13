/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:35:38 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/13 12:24:00 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (src[b])
		b += 1;
	if (!src || !(cpy = (char*)malloc(sizeof(char) * b + 1)))
		return (NULL);
	while (a < b)
	{
		cpy[a] = src[a];
		a++;
	}
	cpy[a] = '\0';
	return (cpy);
}
