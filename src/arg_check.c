/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:18:15 by vtrevisa          #+#    #+#             */
/*   Updated: 2023/02/15 21:48:53 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

int	arg_check(int argc, char **argv, t_data *d)
{
	if (argc < 2)
		return (1);
	if (check_if_bigger_int(argc, argv, d))
		return (2);
	if (check_if_all_number(argc, argv, d))
		return (3);
	if (check_if_repeated(argc, argv, d))
		return (4);
	return (0);
}

int	check_if_all_number(int argc, char **argv, t_data *d)
{
	int	index_hold;
	int	index_check;

	index_hold = 1;
	while (index_hold < argc)
	{
		index_check = 0;
		while (argv[index_hold][index_check] != '\0')
		{
			if (argv[index_hold][index_check] == '-')
				index_check++;
			if (!ft_isdigit(argv[index_hold][index_check]))
				return (-1);
			index_check++;
		}
		index_hold++;
	}
	return (0);
}

int	check_if_repeated(int argc, char **argv, t_data *d)
{
	int	index_hold;
	int	index_check;

	index_hold = 1;
	while (index_hold < argc - 1)
	{
		index_check = index_hold + 1;
		while (index_check < argc)
		{
			if (ft_atoi(argv[index_hold]) == ft_atoi(argv[index_check]))
				return (-1);
			index_check++;
		}
		index_hold++;
	}
	return (0);
}

int	check_if_bigger_int(int argc, char **argv, t_data *d)
{
	int			index;
	long int	test;

	index = 1;
	test = 0;
	while (index < argc)
	{
		test = ft_atoli(argv[index]);
		if (test > 2147483647 || test < -2147483648)
			return (1);
		index++;
	}
	return (0);
}
