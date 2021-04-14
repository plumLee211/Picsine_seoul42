/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:22:33 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/12 11:26:48 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(int i, char **str)
{
	int		y;
	int		x;

	y = 1;
	while (y < i)
	{
		x = y + 1;
		while (x < i)
		{
			if (ft_strcmp(str[y], str[x]) > 0)
				swap(&str[y], &str[x]);
			x++;
		}
		y++;
	}
	y = 1;
	while (y < i)
	{
		print(str[y++]);
		write(1, "\n", 1);
	}
	return (0);
}
