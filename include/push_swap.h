/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:51:05 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/12 01:41:04 by mtavares         ###   ########.fr       */
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

void	exit_prog(t_list **a, int i);
void	parse_args(t_list **a, char **av);
void	swap(t_list **stack);
void	swap(t_list **stack);
void	push(t_list **stack1, t_list **stack2);
void	rotate(t_list **stack);
void	rotate_all(t_list **stack1, t_list **stack2);
void	rotate_inv(t_list **stack1);
void	rotate_inv_all(t_list **stack1, t_list **stack2);
void	free_lst(t_list **stack);

#endif