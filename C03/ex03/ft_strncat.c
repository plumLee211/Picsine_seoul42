/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:39:50 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/08 06:57:46 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				i1;

	i1 = 0;
	while (dest[i1] != '\0')
		i1++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[i1] = src[i];
		i1++;
		i++;
	}
	dest[i1] = '\0';
	return (dest);
}
