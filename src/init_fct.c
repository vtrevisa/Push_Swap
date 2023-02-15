#include "../Include/push_swap.h"

void get_parameters(int argc, char **argv, t_data *d)
{	
	int	i;
	int	r;

	d->max = argc - 1;
	i = 1;
	r = d->max - 1;
	d->a = malloc (sizeof(int *) * d->max);
	d->b = malloc (sizeof(int *) * d->max);
	while (i <= d->max)
	{
		d->a[r] = ft_atoi(argv[i]);
		d->b[r] = 0;
		i++;
		r--;
	}
	simplifier(d);
	d->moves = 0;
	d->big = get_max_nbr(d);
	d->small = get_min_nbr(d);
	d->top_a = d->max - 1;
	d->top_b = 0;
}

void strct(t_data *d)
{
	int	i;
	int r;
	char	**a;
	char	**b;

	i = d->max - 1;
	r = 0;
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
		}
		i--;
		r++;
	}
	while (--r >= 0)
	{
		ft_printf("    %s               %s     \n", a[r], b[r]);
	}
	ft_printf("    -               -     \n");
	ft_printf("    a               b \n");
	ft_printf("----------------------------\n");
}