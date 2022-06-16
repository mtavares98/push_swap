/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:51:05 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/16 15:41:45 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Headers */

# include "../libs/libft/libft.h"
# include "../libs/printf_fd/include/printf_fd.h"
# include <limits.h>

/* Typedefs */

typedef struct s_ps	t_ps;

/* Principal struct */

struct s_ps
{
	t_list	*tmp;
	int		max;
	int		min;
	int		max_bits;
	int		len;
	int		i;
	int		j;
};

/* Functions */

void	exit_prog(t_list **a, t_list **b, int i);
int		is_finished(t_list *a, t_list *b);
void	parse_args(t_list **a, char **av);
void	have_max_min(t_list *a, int *max, int *min);
int		last_value(t_list *a);
void	algorithm_2(t_list **a);
void	algorithm_3(t_list **a);
void	algoritm_4_5(t_list **a, t_list **b);
void	algorithm_big(t_list **a, t_list **b);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_all(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **b, t_list **a);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_all(t_list **a, t_list **b);
void	rotate_inv_a(t_list **a);
void	rotate_inv_b(t_list **b);
void	rotate_inv_all(t_list **a, t_list **b);
void	free_lst(t_list **stack);

#endif