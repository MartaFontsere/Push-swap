/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:50:41 by mfontser          #+#    #+#             */
/*   Updated: 2024/03/25 14:06:20 by mfontser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid_format(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		printf("\nCheckeo el formato del argumento |%d|\n", i);
		j = 0;// importante que a cada vuelta j empiece siendo 0
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			printf("he encontrado el signo |%c|\n", argv[i][j]);
			if (argv[i][j + 1] == '\0')
			{
				printf("hay un signo sin nada mas, paro de checkear\n");
				return (0);
			}
			printf("el argumento |%d| en posicion |%d| es |%c|\n", i, j, argv[i][j]);
			j++;
		}
		while (argv[i][j] != '\0')
		{
			if (ft_isspace(argv[i][j]) == 1) // fallo, como ponia el ==1 dentro del parentesis le decia que el resultado de la funcion era 1 siempre y no entraba a hacer nada, por lo que no chequeaba los espacios). Una vez resuelto, cuando encuentro un espacio ya directamente se corta con el return. Por eso no necesito poner else if en el siguiente, si entra aqui ya no entrara al siguiente.
			{
				printf("hay un espacio en el parametro, formato incorrecto\n");
				return (0);
			}
			if (argv[i][j] < '0' || argv[i][j] > '9') // fallo, como ponia &&, no entraba nunca. Al resolver esto mientras lo anterior aun fallaba, esto servia de stopper para los espacios tambien, ya que se contempla en ascii.
			{
				printf("hay algo que no es un numero, paro de checkear\n");
				return (0);
			}
			printf("el argumento |%d| en posicion |%d| es |%c|\n", i, j, argv[i][j]);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_size_int(char **argv) //ahora tengo que comparar strings, pero lo podria gestionar con comparando ints en el atoi. Otra posibiliad
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("\nCompruebo el size de cada argumento\n");

	while (argv[i])
	{
		printf("vuelta numero |%d|\n", i);
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			printf("   he encontrado un signo\n");
			if (argv[i][j + 1] == '0')
			{
				printf("he encontrado un 0 despues del signo");
				argv[i] = delete_zeros(argv[i]);
			}
			if (ft_strlen(argv[i]) > 11)
			{
				printf("con signo: el numero supera los limites\n");
				return (0);
			}
			else if (ft_strlen(argv[i]) == 11 && argv[i][j] == '-')
			{
				printf("hay un - y 10 digitos, toca comparar\n");
				if (ft_strncmp("–2147483648", argv[i], 11) < 0)
					return (0);
			}
			else if (ft_strlen(argv[i]) == 11 && argv[i][j] == '+')
			{
				printf("hay un + y 10 digitos, toca comparar\n");
				if (ft_strncmp("+2147483647", argv[i], 11) < 0)
					return (0);
			}
		}
		if (argv[i][j] == '0')
		{
			printf("he encontrado un 0");
			argv[i] = delete_zeros(argv[i]);
		}

		else
		{
			if (ft_strlen(argv[i]) > 10)
			{
				printf("sin signo: el numero supera los limites\n");
				return (0);
			}
			else if (ft_strlen(argv[i]) == 10)
			{
				printf("hay 10 digitos, toca comparar\n");
				if (ft_strncmp("2147483647", argv[i], 10) < 0)
					return (0);
			}
		}
		i++;
	}
	return (1);
}

int	params_are_valids(char **argv)
{
	if (check_valid_format(argv) == 0)
		return (0);
	if (check_size_int(argv) == 0)
		return (0);
	return (1);
}
