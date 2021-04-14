/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:56:56 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/11 02:51:03 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char x)
{
	write(1, &x, 1);
}

void	reset(int vect[])
{
	int i;

	i = 0;
	while (i < 256)
	{
		vect[i] = 0;
		i++;
	}
}

void	ft_putnbr(int nb, char *base, int basenum)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb, base, basenum);
	}
	else
	{
		if (nb > basenum)
			ft_putnbr(nb / basenum, base, basenum);
		print('0' + nb % basenum);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*str;
	int		dat[256];
	int		len;

	str = base;
	reset(dat);
	while (*str != '\0')
	{
		if (dat[(int)*str] == 0 && *str != '+' && *str != '-')
			dat[(int)*str] = 1;
		else
			return ;
		++str;
	}
	len = str - base;
	if (len == 0 || len == 1)
		return ;
	ft_putnbr(nbr, base, len);
}
