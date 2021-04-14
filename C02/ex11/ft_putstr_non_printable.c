/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:09:50 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/08 00:32:06 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			print("0123456789abcdef"[(unsigned char)str[i] / 16]);
			print("0123456789abcdef"[(unsigned char)str[i] % 16]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
