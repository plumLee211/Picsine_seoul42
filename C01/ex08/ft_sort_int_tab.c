/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 01:47:56 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/03/31 20:02:21 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		y;
	int		x;

	y = 0;
	while (y < size)
	{
		x = y + 1;
		while (x < size)
		{
			if (tab[y] > tab[x])
				swap(&tab[y], &tab[x]);
			x++;
		}
		y++;
	}
}
