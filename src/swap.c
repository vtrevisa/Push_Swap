/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:18:42 by vtrevisa          #+#    #+#             */
/*   Updated: 2023/02/15 20:28:29 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

void	swap_a(t_data *d)
{
	int	swp;

	if (d->top_a > 0)
	{
		ft_printf("sa\n");
		swp = d->a[d->top_a];
		d->a[d->top_a] = d->a[d->top_a - 1];
		d->a[d->top_a - 1] = swp;
	}
	d->moves += 1;
}

void	swap_b(t_data *d)
{
	int	swp;

	if (d->top_b > 0)
	{
		ft_printf("sb\n");
		swp = d->b[d->top_b];
		d->b[d->top_b] = d->b[d->top_b - 1];
		d->b[d->top_b - 1] = swp;
	}
	d->moves += 1;
}

void	swap_a_b(t_data *d)
{
	int	swp;

	if (d->top_a > 0 || d->top_b > 0)
	{
		ft_printf("ss\n");
		swp = d->a[d->top_a];
		d->a[d->top_a] = d->a[d->top_a - 1];
		d->a[d->top_a - 1] = swp;
		swp = d->b[d->top_b];
		d->b[d->top_b] = d->b[d->top_b - 1];
		d->b[d->top_b - 1] = swp;
	}
	d->moves += 1;
}
