/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:14:36 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/04 15:12:23 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int a;

	a = 0;
	while (a < n && (str1[a] != '\0' && str2[a] != '\0'))
	{
		if (str1[a] != str2[a])
			return ((unsigned char)str1[a] - (unsigned char)str2[a]);
		a++;
	}
	if (a != n)
		return ((unsigned char)str1[a] - (unsigned char)str2[a]);
	return (0);
}
