/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:18:29 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/13 04:24:37 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_map[10];
int		g_used[10];
int		g_cnt;

void	print(void)
{
	int		i;
	char	x;

	i = 0;
	while (i < 10)
	{
		x = g_map[i] + '0';
		write(1, &x, 1);
		i++;
	}
	write(1, "\n", 1);
	g_cnt++;
}

int		check(int y, int x)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (x - i >= 0 && g_map[y - i] == x - i)
			return (0);
		if (x + i < 10 && g_map[y - i] == x + i)
			return (0);
		i++;
	}
	return (1);
}

void	run(int y)
{
	int x;

	if (y == 10)
	{
		print();
		return ;
	}
	x = 0;
	while (x < 10)
	{
		if (g_used[x] == 0 && check(y, x) == 1)
		{
			g_map[y] = x;
			g_used[x] = 1;
			run(y + 1);
			g_map[y] = 0;
			g_used[x] = 0;
		}
		x++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int y;

	y = 0;
	while (y < 10)
	{
		g_map[0] = y;
		g_used[y] = 1;
		run(1);
		g_map[0] = 0;
		g_used[y] = 0;
		y++;
	}
	return (g_cnt);
}
