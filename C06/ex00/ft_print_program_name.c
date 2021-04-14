/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 07:03:05 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/12 17:35:40 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int i, char **str)
{
	int k;

	(void)i;
	k = 0;
	while (str[0][k] != '\0')
	{
		write(1, &str[0][k], 1);
		k++;
	}
	write(1, "\n", 1);
	return (0);
}
