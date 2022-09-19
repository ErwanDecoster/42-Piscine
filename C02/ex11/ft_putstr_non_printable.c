/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:28:12 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/06 16:34:57 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	char_to_hex(char char_)
{
	int		a;
	int		b;
	char	*hex;

	hex = "0123456789abcdef";
	a = (char_ / 16);
	b = (char_ % 16);
	write(1, "\\", 1);
	write(1, &hex[a], 1);
	write(1, &hex[b], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			char_to_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
