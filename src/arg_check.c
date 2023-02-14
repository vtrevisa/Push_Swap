#include "../Include/push_swap.h"

int	arg_check(int argc, char **argv, t_data *d)
{
	d->err_code = 0;
	if (argc < 2)
	{
		d->err_code = 3;
		return (3);
	}
	if (check_if_all_number(argc, argv, d))
		return (1);
	if (check_if_repeated(argc, argv, d))
		return (2);
}

int check_if_all_number(int argc, char **argv, t_data *d)
{
	int	index_hold;
	int	index_check;

	index_hold = 1;
	while (index_hold < argc)
	{
		index_check = 0;
		while (argv[index_hold][index_check] != '\0')
		{
			if (argv[index_hold][index_check] == '-')
				index_check++;
			if (!ft_isdigit(argv[index_hold][index_check]))
			{
				d->err_code = 1;
				return (d->err_code);
			}
			index_check++;
		}
		index_hold++;
	}
	return (d->err_code);
}

int check_if_repeated(int argc, char **argv, t_data *d)
{
	int	index_hold;
	int	index_check;

	index_hold = 1;
	while (index_hold < argc - 1)
	{
		index_check = index_hold + 1;
		while (index_check < argc)
		{
			if (ft_atoi(argv[index_hold]) == ft_atoi(argv[index_check]))
			{	
				d->err_code = 2;
				return (d->err_code);
			}
			index_check++;
		}
		index_hold++;
	}
	return (d->err_code);
}

void handle_arg_error(int n)
{
	if (n == 1)
		ft_printf("Arg value error, please insert only numbers\n");
	if (n == 2)
		ft_printf("Arg number repeated, please insert different numbers\n");
	if (n == 3)
		ft_printf("You forgot to pass the args!\n");
}