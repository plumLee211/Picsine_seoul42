/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 23:35:36 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/03/29 12:27:02 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_print(char fir, char sec, char thr)
{
	write(1, &fir, 1);
	write(1, &sec, 1);
	write(1, &thr, 1);
	if (fir == '7' && sec == '8' && thr == '9')
		return ;
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	fir;
	char	sec;
	char	thr;

	fir = '0';
	sec = '0';
	thr = '0';
	while (fir <= '7')
	{
		sec = fir + 1;
		while (sec <= '8')
		{
			thr = sec + 1;
			while (thr <= '9')
			{
				print_print(fir, sec, thr);
				thr++;
			}
			sec++;
		}
		fir++;
	}
}
