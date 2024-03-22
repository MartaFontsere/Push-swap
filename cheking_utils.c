/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheking_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:58:02 by mfontser          #+#    #+#             */
/*   Updated: 2024/03/22 01:33:23 by mfontser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (i < n && s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str)
	{
		while (ft_isspace(str[i]) == 1) //aunque ya me he asegurado de que no haya espacios, lo dejo para no modificar el atoi en si.
			i++;
		if (str[i] == '+')
		{
			i++;
		}
		else if (str[i] == '-')
		{
			i++;
			sign = -1;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - 48);
			i++;
		}
	}
	return (result * sign);
}
