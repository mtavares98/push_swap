/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:51:05 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/10 19:00:37 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Headers */

# include "../libs/libft/libft.h"
# include "../libs/printf_fd/include/printf_fd.h"

/* Typedefs */

typedef struct s_stack	t_stack;

/* Strcucts for the stacks */

struct s_stack
{
	int		*content;
	t_stack	*next;
};

/* Functions */
void	swap(t_stack **stack);
void	push(t_stack *a, t_stack *b);
t_stack	*ft_lstnew_1(void *content);

#endif