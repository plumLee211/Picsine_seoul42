/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 03:15:33 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/12 17:32:09 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fibonacci(int index, int fir, int sec)
{
	if (index == 0)
		return (fir);
	if (index == 1)
		return (sec);
	return (fibonacci(index - 1, sec, fir + sec));
}

int		ft_fibonacci(int index)
{
	int i;

	if (index < 0)
		return (-1);
	i = fibonacci(index, 0, 1);
	return (i);
}
