/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:13:59 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/14 12:12:01 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int k;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	k = 1;
	while (power > 0)
	{
		k *= nb;
		power--;
	}
	return (k);
}
