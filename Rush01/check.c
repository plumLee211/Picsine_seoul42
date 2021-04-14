/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:49:56 by seungcoh          #+#    #+#             */
/*   Updated: 2021/04/03 18:53:06 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_colup(char ans[][5], int *input)
{
	int i;
	int j;
	int curr;
	int cnt;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		curr = 0;
		cnt = 0;
		while (++j < 4)
		{
			if (ans[j][i] > curr)
			{
				curr = ans[j][i];
				cnt++;
			}
		}
		if (input[i] != cnt)
			return (1);
	}
	return (0);
}

int	check_coldown(char ans[][5], int *input)
{
	int i;
	int j;
	int curr;
	int cnt;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		curr = 0;
		cnt = 0;
		while (++j < 4)
		{
			if (ans[3 - j][i] > curr)
			{
				curr = ans[3 - j][i];
				cnt++;
			}
		}
		if (input[i] != cnt)
			return (1);
	}
	return (0);
}

int	check_rowleft(char ans[][5], int *input)
{
	int i;
	int j;
	int curr;
	int cnt;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		curr = 0;
		cnt = 0;
		while (++j < 4)
		{
			if (ans[i][j] > curr)
			{
				curr = ans[i][j];
				cnt++;
			}
		}
		if (input[i] != cnt)
			return (1);
	}
	return (0);
}

int	check_rowright(char ans[][5], int *input)
{
	int i;
	int j;
	int curr;
	int cnt;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		curr = 0;
		cnt = 0;
		while (++j < 4)
		{
			if (ans[i][3 - j] > curr)
			{
				curr = ans[i][3 - j];
				cnt++;
			}
		}
		if (input[i] != cnt)
			return (1);
	}
	return (0);
}

int	check(char ans[][5])
{
	int flag;
	int i;
	int j;
	int bit;

	flag = 1;
	if (check_colup(ans, g_input) | check_coldown(ans, g_input + 4))
		flag = 0;
	if (check_rowleft(ans, g_input + 8) | check_rowright(ans, g_input + 12))
		flag = 0;
	i = 0;
	while (i < 4)
	{
		bit = 0;
		j = 0;
		while (j < 4)
		{
			if (bit & (1 << (ans[j][i] - '0')))
				return (0);
			bit |= (1 << (ans[j][i] - '0'));
			j++;
		}
		i++;
	}
	return (flag);
}
