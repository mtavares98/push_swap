/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:43 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/19 15:27:10 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Swap the first two menbers of a given stack */
void	swap_a(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	*a = (*a)->next;
	if ((*a))
		tmp->next = (*a)->next;
	(*a)->next = tmp;
	printf_fd(1, "sa\n");
}

void	swap_b(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	*b = (*b)->next;
	if (*b)
		tmp->next = (*b)->next;
	(*b)->next = tmp;
	printf_fd(1, "sb\n");
}

/* Swap the fist two menbers of the 2 stacks at the same time */
void	swap_all(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *a;
	*a = (*a)->next;
	if (*a)
		tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	if (*b)
		tmp->next = (*b)->next;
	(*b)->next = tmp;
	printf_fd(1, "ss\n");
}
