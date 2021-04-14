/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 01:05:34 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/03/29 12:51:15 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i)
{
	int		f;
	int		s;

	f = i / 10 + '0';
	s = i % 10 + '0';
	write(1, &f, 1);
	write(1, &s, 1);
}

void	print_and_check(int fir, int sec)
{
	print(fir);
	write(1, " ", 1);
	print(sec);
	if (fir == 98 && sec == 99)
		return ;
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		fir;
	int		sec;

	fir = 0;
	sec = 1;
	while (fir <= 99)
	{
		if (fir < sec)
		{
			print_and_check(fir, sec);
		}
		sec++;
		if (sec > 99)
		{
			fir++;
			sec = 0;
		}
	}
}
