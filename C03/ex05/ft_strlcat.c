/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:52:55 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/08 11:26:59 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[l] && l < size)
		l++;
	while (src[i] && size && l + i < size - 1)
	{
		dest[l + i] = src[i];
		i++;
	}
	if (l < size)
		dest[l + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (l + i);
}
