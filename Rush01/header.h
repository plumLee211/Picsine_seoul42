/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:33:51 by seungcoh          #+#    #+#             */
/*   Updated: 2021/04/03 21:19:57 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int		g_choose[331776][4];
int		g_c_row;
int		g_input[16];
char	g_perm[24][5];

void	choose_perm(int *p, int ind, int p_cnt, int n);
int		check(char ans[][5]);
void	make_array(int c_cnt);
void	make_perm(int *p, int ind, int bit, int n);
int		ft_error_case(char argv[1]);
#endif
