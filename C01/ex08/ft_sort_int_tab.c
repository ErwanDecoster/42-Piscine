/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:56:29 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/05 13:25:26 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	r;
	int	swap;

	i = 0;
	r = 0;
	while (r < size)
	{
		while (i < size - 1 & size != 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = swap;
			}
			i++;
		}
		i = 0;
	r++;
	}
}
