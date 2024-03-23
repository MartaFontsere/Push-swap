/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:55:42 by mfontser          #+#    #+#             */
/*   Updated: 2024/03/23 02:45:13 by mfontser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int j; // borrar
	int	num;

	i = 0;
	j = 0; // borrar
	num = 0;
	printf("\nArgumentos que entran: ");
	while (argv[i]) // borrar
	{
		printf("|%s|, ", argv[i]);
		i++;
	}
	printf("\n");
	if (argc < 2 || params_are_valids(argv) == 0)
	{
		printf("Los parametros NO son validos\n");
		return (write (2, "Error\n", 6));
	}
	
	else
	printf("\nLos parametros son validos");
	/*
	{
		while (argv[i])
		{
			num = get_numbers(argv);
			i++;
		}
	}


*/
	return (0);
}





