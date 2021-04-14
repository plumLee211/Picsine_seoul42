/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:26:18 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/08 05:35:39 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int index;

	x = 0;
	while (src[x] != '\0')
		x++;
	index = 0;
	if (size != 0)
	{
		while (src[index] != '\0' && index + 1 < size)
		{
			dest[index] = src[index];
			index++;
		}
	}
	dest[index] = '\0';
	return (x);
}
