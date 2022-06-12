/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:43 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/12 16:34:29 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Swap the first two menbers of a given stack */
void	swap_a(t_list **a)
{
	int	tmp;

	tmp = (*a)->content;
	(*a)->content = (*a)->next->content;
	(*a)->next->content = tmp;
	printf_fd(1, "sa\n");
}

void	swap_b(t_list **b)
{
	int	tmp;

	tmp = (*b)->content;
	(*b)->content = (*b)->next->content;
	(*b)->next->content = tmp;
	printf_fd(1, "sb\n");
}

/* Swap the fist two menbers of the 2 stacks at the same time */
void	swap_all(t_list **a, t_list **b)
{
	int	tmp;

	tmp = (*a)->content;
	(*a)->content = (*a)->next->content;
	(*a)->next->content = tmp;
	tmp = (*b)->content;
	(*b)->content = (*b)->next->content;
	(*b)->next->content = tmp;
	printf_fd(1, "ss\n");
}
