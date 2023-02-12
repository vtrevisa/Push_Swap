#include "../Include/push_swap.h"

int call_sort(int argc, t_data *data)
{
	if (argc < 3)
	{
		strct(data);
		return (0);
	}
	else if (argc == 3)
		push_swap_2(data);
	else if (argc == 4)
		push_swap_3(data);
	else if (argc == 5)
		push_swap_4(data);
	else if (argc == 6)
		push_swap_5(data);
	else
	{
		simplifier(data);
		radix_sort(data);
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_data data;

	get_parameters(argc, argv, &data);
	find_top (&data);
	strct(&data);
	call_sort(argc, &data);
	strct(&data);
	return (0);
}