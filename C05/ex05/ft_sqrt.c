/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:16:17 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/13 04:26:35 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long int	nbr;
	long long int	i;

	nbr = (long long)nb;
	if (nbr <= 0)
		return (0);
	i = 1;
	while (i * i <= nbr)
	{
		if (i * i == nbr)
			return ((int)i);
		i++;
	}
	return (0);
}
