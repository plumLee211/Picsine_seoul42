/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:20:43 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/10 13:54:37 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (*dest != '\0' && i < size)
	{
		++dest;
		++i;
	}
	while (i + 1 < size && *src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < size)
		*dest = 0;
	while (*src != '\0')
	{
		++i;
		++src;
	}
	return (i);
}
