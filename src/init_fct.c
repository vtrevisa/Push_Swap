#include "../Include/push_swap.h"

void get_parameters(int argc, char **argv, t_data *d)
{	
	int i;

	d->max = argc - 1;
	i = 0;
	d->a = malloc (sizeof(int) * d->max);
	d->b = malloc (sizeof(int) * d->max);
	while (i < d->max)
	{
		d->a[i] = atoi(argv[d->max - i]);
		d->b[i] = 0;
		i++;
	}
	d->moves = 0;
	d->big = get_max_nbr(d);
	d->small = get_min_nbr(d);
	d->size_box = (d->max/5) + (d->max%5 > 0);
	d->size_l_box = d->max%5;
}

void strct(t_data *d)
{
	int	i;
	char	**a;
	char	**b;

	i = d->max - 1;
	a = malloc(sizeof(char *) * d->max);
	b = malloc(sizeof(char *) * d->max);
	ft_printf("----------------------------\n");
	ft_printf("MOVES: %d\n", d->moves);
	ft_printf("    STACK A          STACK B\n");
	while (i >= 0)
	{
		a[i] = ft_itoa(d->a[i]);
		b[i] = ft_itoa(d->b[i]);
		if (a[i] != 0 || b[i] != 0)
		{
			if (a[i][0] == '0')
				a[i] = " ";
			if (b[i][0] == '0')
				b[i] = " ";
			ft_printf("    %s               %s     \n", a[i], b[i]);
		}
		i--;
	}
	ft_printf("    -               -     \n");
	ft_printf("    a               b \n");
	ft_printf("----------------------------\n");
}

void find_top(t_data *d)
{
	d->top_a = d->max;
	d->top_b = d->max;
	while (d->top_b >= 0 && d->b[d->top_b] == 0)
		d->top_b--;
	while (d->top_a >= 0 && d->a[d->top_a] == 0)
		d->top_a--;
}
