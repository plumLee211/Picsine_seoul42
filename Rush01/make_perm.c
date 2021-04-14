/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_perm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:06:53 by seungcoh          #+#    #+#             */
/*   Updated: 2021/04/03 18:53:27 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	make_perm(int *p, int ind, int bit, int n)
{
	int i;

	if (ind == n)
	{
		i = 0;
		while (i < n)
		{
			g_perm[g_c_row][i] = p[i] + '0';
			i++;
		}
		g_perm[g_c_row++][4] = 0;
		return ;
	}
	i = 1;
	while (i <= n)
	{
		if (bit & (1 << i))
		{
			i++;
			continue;
		}
		p[ind] = i;
		make_perm(p, ind + 1, (bit | (1 << i)), n);
		i++;
	}
}
