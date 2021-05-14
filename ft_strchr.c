/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:10:16 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/04 15:02:06 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*a;
	int		b;

	b = 0;
	a = (char *)str;
	while (a[b] != '\0' && a[b] != (char)c)
		b++;
	if (a[b] != (char)c)
		return (NULL);
	else
		return ((char*)str + b);
}
