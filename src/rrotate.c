/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:18:37 by vtrevisa          #+#    #+#             */
/*   Updated: 2023/02/15 20:24:48 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

void	r_rotate_a(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("rra\n");
	index = 0;
	swp = d->a[index];
	while (index < d->top_a)
	{
		d->a[index] = d->a[index + 1];
		index++;
	}
	d->a[index] = swp;
	d->moves += 1;
}

void	r_rotate_b(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("rrb\n");
	index = 0;
	swp = d->b[index];
	while (index < d->top_b)
	{
		d->b[index] = d->b[index + 1];
		index++;
	}
	d->b[index] = swp;
	d->moves += 1;
}

void	r_rotate_a_b(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("rrr\n");
	index = 0;
	swp = d->a[index];
	while (index < d->top_a)
	{
		d->a[index] = d->a[index + 1];
		index++;
	}
	d->a[index] = swp;
	index = 0;
	swp = d->b[index];
	while (index < d->top_b)
	{
		d->b[index] = d->b[index + 1];
		index++;
	}
	d->b[index] = swp;
	d->moves += 1;
}
