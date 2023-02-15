/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:17:59 by vtrevisa          #+#    #+#             */
/*   Updated: 2023/02/15 22:43:37 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

void	get_parameters(int argc, char **argv, t_data *d)
{
	int	i;
	int	r;

	d->max = argc - 1;
	i = 1;
	r = d->max - 1;
	d->a = malloc (sizeof(int *) * d->max);
	d->b = malloc (sizeof(int *) * d->max);
	while (i <= d->max)
	{
		d->a[r] = ft_atoi(argv[i]);
		d->b[r] = 0;
		i++;
		r--;
	}
	simplifier(d);
	d->moves = 0;
	d->big = get_max_nbr(d);
	d->small = get_min_nbr(d);
	d->top_a = d->max - 1;
	d->top_b = 0;
}
