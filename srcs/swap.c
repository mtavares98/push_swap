/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:43 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/11 13:57:11 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Swap the first two menbers of a given stack */
void	swap(t_list **stack)
{
	int	tmp;

	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
	printf_fd(1, "s%c");
}

/* Swap the fist two menbers of the 2 stacks at the same time */
void	swap_all(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
}
