/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:04:52 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/02 09:32:54 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int o)
{
	o = o + '0';
	write(1, &o, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a / 10);
			print(a % 10);
			write(1, " ", 1);
			print(b / 10);
			print(b % 10);
			if (b == 99 && a == 98)
			{
			}
			else
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
