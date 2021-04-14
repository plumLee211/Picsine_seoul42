/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:41:01 by seungcoh          #+#    #+#             */
/*   Updated: 2021/04/04 22:21:41 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int i;
	int ind;
	int p[4];
	int error;

	error = ft_error_case(argv[1]);
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (error != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	ind = 0;
	while (argv[1][i])
	{
		if ('0' <= argv[1][i] && argv[1][i] <= '9')
			g_input[ind++] = argv[1][i] - '0';
		i++;
	}
	g_c_row = 0;
	make_perm(p, 0, 0, 4);
	g_c_row = 0;
	choose_perm(p, 0, 24, 4);
	make_array(331776);
}
