/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:18:26 by vtrevisa          #+#    #+#             */
/*   Updated: 2023/02/15 22:25:04 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

void	push_a(t_data *d)
{
	int	swp;

	if (d->top_b >= 0)
	{
		ft_printf("pa\n");
		d->top_a++;
		swp = d->b[d->top_b];
		d->b[d->top_b] = d->a[d->top_a];
		d->a[d->top_a] = swp;
		d->top_b--;
	}
	d->moves += 1;
}

void	push_b(t_data *d)
{
	int	swp;

	if (d->top_a >= 0)
	{
		ft_printf("pb\n");
		d->top_b++;
		swp = d->a[d->top_a];
		d->a[d->top_a] = d->b[d->top_b];
		d->b[d->top_b] = swp;
		d->top_a--;
	}
	d->moves += 1;
}
