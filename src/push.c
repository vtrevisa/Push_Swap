#include "../Include/push_swap.h"

void push_a (t_data *d)
{
	int	swp;

	if (d->top_b >= 0)
	{
		ft_printf("PUSH A\n");
		d->top_a++;
		swp = d->b[d->top_b];
		d->b[d->top_b] = d->a[d->top_a];
		d->a[d->top_a] = swp;
		d->top_b--;
	}
	d->moves += 1;
	strct(d);
}

void push_b (t_data *d)
{
	int	swp;

	if (d->top_a >= 0)
	{
		ft_printf("PUSH B\n");
		d->top_b++;
		swp = d->a[d->top_a];
		d->a[d->top_a] = d->b[d->top_b];
		d->b[d->top_b] = swp;
		d->top_a--;
	}
	d->moves += 1;
	strct(d);
}