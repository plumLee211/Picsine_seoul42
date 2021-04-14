/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 01:08:24 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/03/30 01:10:07 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int n, char path[])
{
	int		j;

	j = 0;
	while (j < n)
	{
		write(1, &path[j], 1);
		j++;
	}
}

void	run(int level, int n, char path[])
{
	int		i;

	if (level == n)
	{
		print(n, path);
		if (path[0] - '0' != 9 - n + 1)
			write(1, ", ", 2);
		return ;
	}
	i = 0;
	while (i <= 9)
	{
		if (level > 0 && path[level - 1] - '0' >= i)
		{
			i++;
			continue ;
		}
		path[level] = i + '0';
		run(level + 1, n, path);
		path[level] = 0;
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	path[10];
	int		i;

	i = 0;
	while (i <= 9)
	{
		path[i] = 0;
		i++;
	}
	run(0, n, path);
}
