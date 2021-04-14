/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 01:20:23 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/07 21:50:50 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] > 126)
			return (0);
		index++;
	}
	return (1);
}
