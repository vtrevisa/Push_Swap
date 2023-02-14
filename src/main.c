#include "../Include/push_swap.h"

void free_all(t_data *d)
{
	free(d->a);
	free(d->b);
}

int call_sort(int argc, t_data *data)
{
	if (argc < 3)
		return (0);
	else if (argc == 3)
		push_swap_2(data);
	else if (argc == 4)
		push_swap_3(data);
	else if (argc == 5)
		push_swap_4(data);
	else if (argc == 6)
		push_swap_5(data);
	else
		radix_sort(data);
	return (0);
}

int main(int argc, char **argv)
{
	t_data data;

	if (!arg_check(argc, argv, &data))
	{
		get_parameters(argc, argv, &data);
		call_sort(argc, &data);
	}
	else
		handle_arg_error(data.err_code);
	free_all(&data);
	return (0);
}