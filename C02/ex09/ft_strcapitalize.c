/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoulee <jiyoulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 03:02:55 by jiyoulee          #+#    #+#             */
/*   Updated: 2021/04/10 18:01:20 by jiyoulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		num(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

int		upper(char x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	return (0);
}

int		lower(char x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	return (0);
}

int		word(char x)
{
	if (num(x))
		return (1);
	if (upper(x))
		return (1);
	if (lower(x))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		fir;

	i = 0;
	fir = 1;
	while (str[i] != '\0')
	{
		if (!word(str[i]))
			fir = 1;
		else
		{
			if (fir && lower(str[i]))
				str[i] -= 32;
			else if (!fir && upper(str[i]))
				str[i] += 32;
			fir = 0;
		}
		++i;
	}
	return (str);
}
