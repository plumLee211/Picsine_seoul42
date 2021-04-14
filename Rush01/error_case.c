/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:42:30 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/04 22:46:53 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_error_case(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			if (!(str[index]  >= '1' && str[index] <= '4'))
				return (1);
		}
		if (index % 2 == 0 && str[index] == ' ')
			return (1);
		if (index % 2 == 1 && str[index] != ' ')
			return (1);
		index++;
	}
	if (index != 31)
		return (1);
	return (0);
}
