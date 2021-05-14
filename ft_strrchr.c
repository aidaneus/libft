/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:57:01 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/05 12:40:59 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char *a;

	a = str;
	while (*a)
		a++;
	if (c == '\0')
		return ((char*)a);
	while (--a >= str)
		if (c == *a)
			return ((char*)a);
	return (NULL);
}
