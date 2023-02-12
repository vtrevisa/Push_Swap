#include "../Include/push_swap.h"

void rotate_a(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("ROTATE A\n");
	index = d->top_a;
	swp = d->a[d->top_a];
	while (index > 0)
	{
		d->a[index] = d->a[index - 1];
		index--;
	}
	d->a[index] = swp;
	d->moves += 1;
	strct(d);
}

void rotate_b(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("ROTATE B\n");
	index = d->top_b;
	swp = d->b[d->top_b];
	while (index > 0)
	{
		d->b[index] = d->b[index - 1];
		index--;
	}
	d->b[index] = swp;
	d->moves += 1;
	strct(d);
}

void rotate_a_b(t_data *d)
{
	int	swp;
	int	index;

	index = d->top_a;
	swp = d->a[d->top_a];
		ft_printf("ROTATE A  B\n");
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
	strct(d);
}