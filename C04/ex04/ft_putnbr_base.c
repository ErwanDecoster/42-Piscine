/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 09:55:26 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/12 15:22:33 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	verif_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i;
		while (base[++j])
			if (base[j] == base[i])
				return (0);
		if (base[i] == '+' || base[i] == '-' || base[i] < '!' || base[i] > '~')
			return (0);
		i++;
	}
	if (i == 0 || i == 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		print;
	long	nb;

	i = 0;
	nb = nbr;
	if (verif_base(base))
	{
		while (base[i])
			i++;
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb > i)
			ft_putnbr_base(nb / i, base);
		print = base[nb % i];
		write(1, &print, 1);
	}
}
