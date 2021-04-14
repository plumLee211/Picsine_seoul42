/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:17:39 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/14 12:11:35 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	long long int	i;
	long long int	nbr;
	int				ret;

	nbr = (long long)nb;
	i = 2;
	if (nbr <= 2)
		return (2);
	if (nbr == 3)
		return (3);
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
		{
			ret = ft_find_next_prime(nbr + 1);
			return (ret);
		}
		i++;
	}
	return ((int)nbr);
}
