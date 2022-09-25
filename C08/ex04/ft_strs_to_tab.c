/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:57:11 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/22 16:28:32 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(++i * sizeof(char));
	return (ft_strcpy(dest, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*stock_strs;

	i = -1;
	stock_strs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock_strs)
		return (NULL);
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		stock_strs[i].size = j;
		stock_strs[i].str = av[i];
		stock_strs[i].copy = ft_strdup(av[i]);
	}
	stock_strs[++i].str = 0;
	return (stock_strs);
}
