/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:51:19 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/03/28 07:07:37 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int width, int height, int x, int y)
{
	if (height == 0)
	{
		if (width == 0 || width == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (height == y)
	{
		if (width == 0 || width == x)
			ft_putchar('C');
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
	nowwidth = 0;
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
