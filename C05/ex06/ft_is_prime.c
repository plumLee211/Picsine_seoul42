/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:16:56 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/14 12:53:08 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long long nbr;
	long long i;

	nbr = (long long)nb;
	if (nbr <= 1)
		return (0);
	if (nbr <= 3)
		return (1);
	if (!(nbr % 2 && nbr % 3))
		return (0);
	i = 5;
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		if (nbr % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}
