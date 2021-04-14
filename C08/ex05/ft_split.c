/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:01:25 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/15 03:32:42 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strndup(char *src, int n)
{
	int		i;
	char	*copy;

	if (src == 0)
		return (NULL);
	i = 0;
	if (!(copy = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (i < n)
	{
		strcp[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int			is_target(char ch, char *charset)
{
	int		i;

	i = 0;
	if (ch == '\0')
		return (1);
	while (charset[i] != '\0')
	{
		if (ch == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int			count_words(char *str, char *charset)
{
	int		i;
	int		cnt;

	cnt = 0;
	i = 1;
	if (is_charset(str[0], charset) == 0)
		cnt++;
	while (str[i] != 0)
	{
		if (is_charset(str[i], charset) == 0 &&
				is_charset(str[i - 1], charset) == 1)
			cnt++;
		i++;
	}
	return (cnt);
}

char		**ft_split(char *str, char *charset)
{
	char	**res;
	int		index;
	int		j;
	int		resindex;

	res = (char**)malloc(sizeof(char*) * (count_words(str, charset) + 1));
	resindex = 0;
	index = 0;
	while (str[index] != '\0')
	{
		j = 0;
		while (is_charset(str[index + j], charset) == 0)
			j++;
		if (j != 0)
		{
			res[resindex] = ft_strndup(&str[index], j);
			resindex++;
			index = index + j;
		}
		index++;
	}
	res[resindex] = 0;
	return (res);
}
