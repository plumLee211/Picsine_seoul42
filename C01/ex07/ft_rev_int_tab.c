/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 01:46:49 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/03/31 12:32:34 by jiyoulee         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int		a;

	a = 0;
	while (a != size / 2)
	{
		swap(&tab[a], &tab[size - a - 1]);
		a++;
	}
}
