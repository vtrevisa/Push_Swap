#include "../Include/push_swap.h"

void push_swap_2(t_data *d)
{
	while (supervisor(d, d->a) == -1)
		swap_a(d);
}

void push_swap_3(t_data *d)
{
	d->big = get_max_nbr(d);
	if (d->a[2] == d->big)
		rotate_a(d);
	if (d->a[1] == d->big)
		r_rotate_a(d);
	if (d->a[0] == d->big)
		push_swap_2(d);
}

void push_swap_4(t_data *d)
{
	int index;

	index = 0;
	d->small = get_min_nbr(d);
	while (supervisor(d, d->a) == -1)
	{
		if (d->a[1] == d->small)
			rotate_a(d);
		if (d->a[0] == d->small)
			r_rotate_a(d);
		if (d->a[2] == d->small) 
			swap_a(d);
		if (d->a[3] == d->small)
		{
			push_b(d);
			push_swap_3(d);
			push_a(d);
		}
	}
	
}

void push_swap_5(t_data *d)
{
	int	i;

	d->small = get_min_nbr(d);
	if (d->a[3] == d->small)
		rotate_a(d);
	if (d->a[2] == d->small)
		rotate_a(d);
	if (d->a[1] == d->small)
		r_rotate_a(d);
	if (d->a[0] == d->small)
		r_rotate_a(d);
	if (d->a[4] == d->small)
	{
		push_b(d);
		push_swap_4(d);
		push_a(d);
	}
}