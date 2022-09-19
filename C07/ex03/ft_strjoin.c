/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:07:51 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/19 11:06:02 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	if (size == 0)
		return (1);
	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i++]);
		len += ft_strlen(sep);
	}
	if (size >= 1)
		len -= ft_strlen(sep);
	return (++len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	result = malloc(sizeof(char) * malloc_size(size, strs, sep));
	result[0] = '\0';
	if (size == 0)
		return (result);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	result[ft_strlen(result)] = 0;
	return (result);
}
