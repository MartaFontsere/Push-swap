/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:50:41 by mfontser          #+#    #+#             */
/*   Updated: 2024/03/22 01:33:29 by mfontser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid_fromat(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;// importante que a cada vuelta j empiece siendo 0
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			if (argv[i][j + 1] == '\0')
				return (0);
			j++;
		}
		while (argv[i][j] != '\0')
		{
			if (ft_isspace(argv[i][j] == 1))
				return (0);
			if (argv[i][j] < '0' && argv[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_size_int(char **argv)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (argv[i])
	{
		if (argv[i][j] == '-' || argv [i][j] = '+')
		{
			if (ft_strlen(argv[i] > 11)
				return (0)
		}
		else
		{
			if (ft_strlen(argv[i]) > 10)
				return (0);
			else if (ft_strlen(argv[i]) == 10)
			{
				ft_strncmp(argv[i][j], "2147483647", 10)
			}
		}
		i++;
	}
	return (1);
}

int	params_are_valids(char **argv)
{
	if (check_valid_format(argv)) == 0
		return (0);
	if (check_size_int(argv) == 0)
		return (0);
	return (1);
}
