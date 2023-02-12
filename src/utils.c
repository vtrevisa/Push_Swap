#include "../Include/push_swap.h"

int get_max_nbr (t_data *d)
{
	int	max;
	int index;

	index = 0;
	max = d->a[index];
	while (++index < d->max)
	{
		if (max < d->a[index] && d->a[index] != 0)
			max = d->a[index];
	}
	return (max);
}

int get_min_nbr (t_data *d)
{
	int	min;
	int index;

	index = 0;
	min = d->a[index];
	while (++index < d->max)
	{
		if (min > d->a[index] && d->a[index] != 0)
			min = d->a[index];
	}
	return (min);
}

int supervisor(t_data *d, int *n)
{
	int i;

	i = 1;

	while (i < d->max)
	{
		if (n[i] > n[i - 1])
			return (-1);
		i++;
	}
	return (0);
}

void simplifier(t_data *d)
{
	int	*copy;
	int	index;
	int	i;
	int	j;

	i = 0;
	index = 0;
	copy = sort_free(d, d->a);
	while (i < d->max)
	{
		j = 0;
		while (j < d->max)
		{
			if (d->a[i] == copy[j])
				d->a[i] = j + 1;
			j++;
		}
		i++;
	}
}

int *sort_free(t_data *d, int *stack)
{
	int	*rslt;
	int	swp;
	int	index;
	int	cmp;

	index = 0;
	rslt = malloc (sizeof (int *) * d->max);
	while (index < d->max)
	{
		rslt[index] = stack[index];
		index++;
	}
	index = 0;
	while (index < d->max)
	{
		cmp = index + 1;
		while (cmp < d->max)
		{
			if (rslt[index] > rslt[cmp])
			{
				swp = rslt[index];
				rslt[index] = rslt[cmp];
				rslt[cmp] = swp;
			}
			cmp++;
		}
		index++;
	}
	return (rslt);
}