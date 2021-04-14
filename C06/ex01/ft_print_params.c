/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 07:07:12 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/12 11:30:35 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int i, char **str)
{
	int		k;
	int		l;

	k = 1;
	while (k < i)
	{
		l = 0;
		while (str[k][l] != '\0')
		{
			write(1, &str[k][l], 1);
			l++;
		}
		write(1, "\n", 1);
		k++;
	}
	return (0);
}
