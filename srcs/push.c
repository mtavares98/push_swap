/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:44:38 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/13 21:30:31 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = (*a);
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	(*b) = tmp;
	(*a)->next = tmp2;
	printf_fd(1, "pa\n");
}

void	push_b(t_list **b, t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = (*b);
	tmp = (*a)->next;
	ft_lstadd_front(b, *a);
	(*a) = tmp;
	(*b)->next = tmp2;
	printf_fd(1, "pb\n");
}
