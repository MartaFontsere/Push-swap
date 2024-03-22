/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:55:42 by mfontser          #+#    #+#             */
/*   Updated: 2024/03/22 01:33:32 by mfontser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	if (argc < 2 || params_are_valids(argv) == 0)
		return (write (2, "Error\n", 6));


	if (params_are_valids(argv) == 1)
	{
		while (argv[i])
		{
			num = ft_atoi(argv);
			i++;
		}
	}



	return (0);
}





