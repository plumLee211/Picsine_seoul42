/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:02:03 by seungcoh          #+#    #+#             */
/*   Updated: 2021/04/03 18:51:24 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	print_array(char ans[][5])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, *(ans + i) + j, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	make_array(int c_cnt)
{
	int		i;
	int		j;
	int		k;
	char	ans[4][5];

	i = 0;
	while (i < c_cnt)
	{
		j = 0;
		while (j < 4)
		{
			k = -1;
			while (++k < 5)
			{
				ans[j][k] = g_perm[g_choose[i][j]][k];
			}
			j++;
		}
		if (check(ans))
		{
			print_array(ans);
			return ;
		}
		i++;
	}
}
