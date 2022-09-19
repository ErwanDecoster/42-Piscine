/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:19:44 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/08 11:23:51 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while ((str[i + j] == to_find[j]) && to_find[j])
			{
				j++;
			}
			if (to_find[j] == 0)
			{
				return (&str[i]);
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
