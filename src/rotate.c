/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:18:34 by vtrevisa          #+#    #+#             */
/*   Updated: 2023/02/15 20:25:27 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

void	rotate_a(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("ra\n");
	index = d->top_a;
	swp = d->a[d->top_a];
	while (index > 0)
	{
		d->a[index] = d->a[index - 1];
		index--;
	}
	d->a[index] = swp;
	d->moves += 1;
}

void	rotate_b(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("rb\n");
	index = d->top_b;
	swp = d->b[d->top_b];
	while (index > 0)
	{
		d->b[index] = d->b[index - 1];
		index--;
	}
	d->b[index] = swp;
	d->moves += 1;
}

void	rotate_a_b(t_data *d)
{
	int	swp;
	int	index;

	index = d->top_a;
	swp = d->a[d->top_a];
	ft_printf("rr\n");
	while (index > 0)
	{
		d->a[index] = d->a[index - 1];
		index--;
	}
	d->a[index] = swp;
	index = d->top_b;
	swp = d->b[d->top_b];
	while (index > 0)
	{
		d->b[index] = d->b[index - 1];
		index--;
	}
	d->b[index] = swp;
	d->moves += 1;
}
