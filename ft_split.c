/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:54:10 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/10 13:53:49 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	a;
	int	words;

	words = 0;
	a = 0;
	while (s[a])
	{
		if (s[a] != c && (s[a + 1] == c || s[a + 1] == '\0'))
			words++;
		a++;
	}
	return (words);
}

static int	words_len(char const *s, char c)
{
	int a;

	a = 0;
	while (s[a] != c && s[a] != '\0')
	{
		a++;
	}
	return (a);
}

static void	*leak(char **splitted, int words)
{
	int a;

	a = 0;
	while (a < words)
	{
		free(splitted[a]);
		a++;
	}
	free(splitted);
	return (NULL);
}

static char	**next(char const *s, int words, char c, char **splitted)
{
	int i;
	int j;
	int len;

	i = -1;
	while (++i < words)
	{
		while (*s == c)
			s++;
		len = words_len(s, c);
		if (!(splitted[i] = (char *)malloc(sizeof(char) * (len + 1))))
			(leak(splitted, i));
		j = 0;
		while (j < len)
			splitted[i][j++] = *s++;
		splitted[i][j] = '\0';
	}
	splitted[i] = NULL;
	return (splitted);
}

char		**ft_split(char const *s, char c)
{
	char	**splitted;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(splitted = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	splitted = next(s, words, c, splitted);
	return (splitted);
}
