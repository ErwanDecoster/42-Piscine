/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:12:30 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/15 14:20:07 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*char	*ft_atoi(char *str, char *base)
{
	int		i;
	int		j;
	int		k;
	int		m;
	char	*num;

	i = 0;
	j = 0;
	k = 0;
	m = 1;
	num = 0;
	while (str[i] > 8 & str[i] < 14 || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while (str[i])
	{
		while (base[j] != str[i])
		{
			j++;
			if (!base[j])
			{
				str[j] = '\0';
				return (str);
			}
		}
		i++;
	}
	return (str);
}*/

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

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	j;
	int	k;
	int	p;
	int	nb;

	j = ft_strlen(str);
	p = 0;
	nb = 0;
	if (verif_base(base))
	{
		while (j-- > 0)
		{
			k = -1;
			while (base[++k])
				if (str[j] == base[k])
					break ;
			nb += k * ft_iterative_power(ft_strlen(base), p++);
		}
	}
	return (nb);
}
