#include "../Include/push_swap.h"

static int get_bit_size(int size)
{
	int	max_bit;
	int	bits_size;

	max_bit = 0;
	bits_size = size;
	while (bits_size)
	{
		max_bit++;
		bits_size = bits_size >> 1;
	}
	return (max_bit);
}

static int push_bit(t_data *d, int bit, int bigger_number)
{
	int	index_list;

	index_list = 0;
	while (index_list < bigger_number)
	{
		if (((d->a[d->top_a] >> bit) & 1) == 1)
			rotate_a(d);
		else
			push_b(d);
		index_list++;
	}
}

void radix_sort(t_data *d)
{
	int	index_bit;
	int	size_bigger_bits;
	int	biggest_number;

	while (supervisor(d, d->a) == -1)
	{
		index_bit = 0;
		size_bigger_bits = get_bit_size(d->max);
		biggest_number = d->big;

		while (index_bit < size_bigger_bits)
		{
			push_bit(d, index_bit, biggest_number);
			while (d->b[d->top_b])
				push_a(d);
			index_bit++;
		}
	}
}
