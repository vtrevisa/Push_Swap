#include "../Include/push_swap.h"

void r_rotate_a(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("REVERSE ROTATE A\n");
	index = 0;
	swp = d->a[index];
	while (index < d->top_a)
	{
		d->a[index] = d->a[index + 1];
		index++;
	}
	d->a[index] = swp;
	d->moves += 1;
	strct(d);
}

void r_rotate_b(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("REVERSE ROTATE B\n");
	index = 0;
	swp = d->b[index];
	while (index < d->top_b)
	{
		d->b[index] = d->b[index + 1];
		index++;
	}
	d->b[index] = swp;
	d->moves += 1;
	strct(d);
}

void r_rotate_a_b(t_data *d)
{
	int	swp;
	int	index;

	ft_printf("REVERSE ROTATE A  B\n");
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
	strct(d);
}