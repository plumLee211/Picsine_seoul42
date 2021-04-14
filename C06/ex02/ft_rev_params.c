/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:16:06 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/08 19:22:06 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int i, char **str)
{
	int k;
	int index;

	k = i - 1;
	while (k > 0)
	{
		index = 0;
		while (str[k][index] != '\0')
		{
			write(1, &str[k][index], 1);
			index++;
		}
		write(1, "\n", 1);
		k--;
	}
	return (0);
}
