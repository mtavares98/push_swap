/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:51:05 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/13 22:00:27 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Headers */

# include "../libs/libft/libft.h"
# include "../libs/printf_fd/include/printf_fd.h"
# include <limits.h>

/* Typedefs */

/* Principal struct */

/* Functions */

void	exit_prog(t_list **a, t_list **b, int i);
int		is_finished(t_list *a, t_list *b);
void	parse_args(t_list **a, char **av);
void	have_max_min(t_list *a, int *max, int *min);
void	algorithm_2(t_list **a);
void	algorithm_3(t_list **a);
void	algoritm_4_5(t_list **a, t_list **b);
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