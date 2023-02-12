#include "../Include/push_swap.h"

void swap_a(t_data *d)
{
	int	swp;

	if (d->top_a > 0)
	{
		ft_printf("SWAP A\n");
		swp = d->a[d->top_a];
		d->a[d->top_a] = d->a[d->top_a - 1];
		d->a[d->top_a - 1] = swp;
	}
	d->moves += 1;
	strct(d);
}

void swap_b(t_data *d)
{
	int	swp;

	if (d->top_b > 0)
	{
		ft_printf("SWAP B\n");
		swp = d->b[d->top_b];
		d->b[d->top_b] = d->b[d->top_b - 1];
		d->b[d->top_b - 1] = swp;
	}
	d->moves += 1;
	strct(d);
}

void swap_a_b(t_data *d)
{
	int	swp;

	if (d->top_a > 0)
	{
		ft_printf("SWAP A\n");
		swp = d->a[d->top_a];
		d->a[d->top_a] = d->a[d->top_a - 1];
		d->a[d->top_a - 1] = swp;
	}
	if (d->top_b > 0)
	{
		ft_printf("SWAP B\n");
		swp = d->b[d->top_b];
		d->b[d->top_b] = d->b[d->top_b - 1];
		d->b[d->top_b - 1] = swp;
	}
	d->moves += 1;
	strct(d);
}
