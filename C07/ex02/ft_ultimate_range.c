/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:24:30 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/15 02:26:55 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		boundary;
	int		index;
	int		*mid;

	index = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	boundary = max - min;
	if (!(mid = (int*)malloc(sizeof(int) * (boundary))))
		return (-1);
	while (index < boundary)
	{
		mid[index] = min++;
		index++;
	}
	*range = mid;
	return (boundary);
}
