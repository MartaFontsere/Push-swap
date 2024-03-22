/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontser <mfontser@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 23:22:40 by mfontser          #+#    #+#             */
/*   Updated: 2024/03/22 01:18:16 by mfontser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	params_are_valids(char **argv);
int	ft_isspace(int c);
int	check_valid_format(char **argv);
int	check_size_int(char **argv);
int	ft_strlen(char *str);
int	ft_atoi(char *str);

#endif
