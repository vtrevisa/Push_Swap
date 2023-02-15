/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:18:18 by vtrevisa          #+#    #+#             */
/*   Updated: 2023/02/15 20:24:29 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

void	free_all(t_data *d)
{
	free(d->a);
	free(d->b);
}

int	call_sort(int argc, t_data *data)
{
	if (argc < 3)
		return (0);
	else if (argc == 3)
		push_swap_2(data);
	else if (argc == 4)
		push_swap_3(data);
	else if (argc == 5)
		push_swap_4(data);
	else if (argc == 6)
		push_swap_5(data);
	else
		radix_sort(data);
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	data;
	int		error;

	error = arg_check(argc, argv, &data);
	if (!error)
	{
		get_parameters(argc, argv, &data);
		call_sort(argc, &data);
		free_all(&data);
	}
	else if (error == 1)
		return (0);
	else
		write(2, "Error\n", 6);
	return (0);
}
