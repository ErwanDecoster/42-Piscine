/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:04:19 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/13 14:01:18 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	back;

	i = 1;
	back = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
		back *= i++;
	return (back);
}
