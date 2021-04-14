/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 05:50:44 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/03/28 06:54:59 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int width, int height, int x, int y)
{
	if (height == 0)
	{
		if (width == 0)
			ft_putchar('A');
		else if (width == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (height == y)
	{
		if (width == 0)
			ft_putchar('C');
		else if (width == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (width == 0 || width == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int y, int x)
{
	int		nowheight;
	int		nowwidth;

	if (y <= 0 || x <= 0)
		return ;
	nowheight = 0;
	while (nowwidth < x)
	{
		nowheight = 0;
		while (nowheight < y)
		{
			print(nowwidth, nowheight, x - 1, y - 1);
			nowheight++;
		}
		ft_putchar('\n');
		nowwidth++;
	}
}
