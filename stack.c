/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:53:02 by mfontser          #+#    #+#             */
/*   Updated: 2024/03/25 14:06:14 by mfontser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (ft_isspace(str[i]) == 1) //aunque ya me he asegurado de que
			//no haya espacios, lo dejo para no modificar el atoi en si.
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
