/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:17:10 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/12 16:53:37 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(&tmp, *a);
	(*a)->next = NULL;
	*a = tmp;
	printf_fd(1, "ra\n");
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;

	tmp = (*b)->next;
	ft_lstadd_back(&tmp, *b);
	(*b)->next = NULL;
	*b = tmp;
	printf_fd(1, "rb\n");
}

void	rotate_all(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(&tmp, *a);
	(*a)->next = NULL;
	*a = tmp;
	tmp = (*b)->next;
	ft_lstadd_back(&tmp, *b);
	(*b)->next = NULL;
	*b = tmp;
	printf_fd(1, "rr\n");
}
