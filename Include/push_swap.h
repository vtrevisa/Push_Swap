/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:19:42 by vtrevisa          #+#    #+#             */
/*   Updated: 2023/02/20 10:51:56 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../Libft/Include/libft.h"
# include <stdlib.h>

typedef struct s_data
{
	int	top_a;
	int	top_b;
	int	max;
	int	*a;
	int	*b;
	int	big;
	int	small;
	int	*list;
	int	moves;

}	t_data;

/*----arg_check.c*/
int		arg_check(int argc, char **argv, t_data *d);
int		check_if_bigger_int(int argc, char **argv, t_data *d);
int		check_if_repeated(int argc, char **argv, t_data *d);
int		check_if_all_number(int argc, char **argv, t_data *d);

/*----init_fct.c----*/
void	get_parameters(int argc, char **argv, t_data *d);

/*----push.c----*/
void	push_a(t_data *d);
void	push_b(t_data *d);

/*----radix_sort.c----*/
void	radix_sort(t_data *d);

/*----rotate.c----*/
void	rotate_a(t_data *d);
void	rotate_b(t_data *d);
void	rotate_a_b(t_data *d);

/*----rrotate.c----*/
void	r_rotate_a(t_data *d);
void	r_rotate_b(t_data *d);
void	r_rotate_a_b(t_data *d);

/*----small_sort.c----*/
void	push_swap_2(t_data *d);
void	push_swap_3(t_data *d);
void	push_swap_4(t_data *d);
void	push_swap_5(t_data *d);

/*----swap.c----*/
void	swap_a(t_data *d);
void	swap_b(t_data *d);
void	swap_a_b(t_data *d);

/*----utils.c----*/
int		get_max_nbr(t_data *d);
int		get_min_nbr(t_data *d);
int		supervisor(t_data *d);
void	simplifier(t_data *d);
int		*sort_free(t_data *d, int *stack);

#endif
