/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:25:36 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/15 04:08:51 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long		ft_strlen(char *str)
{
	long long i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strcat(char *dest, char *src)
{
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0')
		dest[i1++] = src[i2++];
	dest[i1] = '\0';
	return (dest);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	long long	len;
	int			i;
	char		*arr;
	char		*tem;

	if (size == 0)
	{
		arr = (char*)malloc(sizeof(char));
		arr[0] = 0;
		return (arr);
	}
	i = 0;
	len = 0;
	while (i++ < size)
		len += ft_strlen(strs[i]);
	arr = (char*)malloc(len + ft_strlen(sep) * (size - 1) + 1);
	tem = ft_strcat(arr, strs[0]);
	i = 0;
	while (++i < size)
	{
		tem = ft_strcat(tem, sep);
		tem = ft_strcat(tem, strs[i]);
	}
	tem[i] = 0;
	return (arr);
}
