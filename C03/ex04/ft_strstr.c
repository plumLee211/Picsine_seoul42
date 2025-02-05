/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:47:22 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/10 13:48:26 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *s;
	char *f;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		s = str;
		f = to_find;
		while (*f != '\0' && *s == *f)
		{
			++s;
			++f;
		}
		if (*f == '\0')
			return (str);
		++str;
	}
	return (0);
}
