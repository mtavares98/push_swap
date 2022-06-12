/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:44:38 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/12 15:59:35 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!(*b))
		return ;
	tmp = (*b)->next;
	ft_lstadd_front(a, (*b));
	(*b) = tmp;
	printf_fd(1, "pa\n");
}

void	push_b(t_list **b, t_list **a)
{
	t_list	*tmp;

	if (!(*a))
		return ;
	tmp = (*b)->next;
	ft_lstadd_front(a, (*a));
	(*a) = tmp;
	printf_fd(1, "pb\n");
}
