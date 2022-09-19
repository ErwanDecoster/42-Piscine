/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:00:24 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/13 14:24:18 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	back;

	i = 1;
	back = 1;
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
