/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edecoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:58:37 by edecoste          #+#    #+#             */
/*   Updated: 2022/09/06 15:40:48 by edecoste         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' & str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_str_is_alpha(char c)
{
	int	i;

	i = 0;
	if (c < 'A' || c > 'Z' & c < 'a' || c > 'z')
	{
		return (0);
		i++;
	}
	return (1);
}

int	ft_str_is_numeric(char c)
{
	int	i;

	i = 0;
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (str[0] >= 'a' & str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i])
	{
		if (ft_str_is_alpha(str[i]) != 1 & ft_str_is_numeric(str[i]) != 1)
		{
			if (str[i + 1] >= 'a' & str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
