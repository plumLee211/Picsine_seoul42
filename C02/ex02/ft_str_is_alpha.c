/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 00:55:26 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/08 00:40:47 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		flag(char a)
{
	if (a < 'A' || a > 'Z')
	{
		if (a < 'a' || a > 'z')
			return (1);
	}
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int		ret;
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		ret = flag(str[index]);
		if (ret == 1)
			return (0);
		index++;
	}
	return (1);
}
