/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_perm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:08:42 by seungcoh          #+#    #+#             */
/*   Updated: 2021/04/03 18:52:38 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	choose_perm(int *p, int ind, int p_cnt, int n)
{
	int i;

	i = 0;
	if (ind == n)
	{
		while (i < n)
		{
			g_choose[g_c_row][i] = p[i];
			i++;
		}
		g_c_row++;
		return ;
	}
	while (i < p_cnt)
	{
		p[ind] = i;
		choose_perm(p, ind + 1, p_cnt, n);
		i++;
	}
}
