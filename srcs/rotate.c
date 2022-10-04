/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:17:10 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/19 15:03:02 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*tmp;

	tmp = (*a);
	*a = (*a)->next;
	ft_lstadd_back(a, tmp);
	tmp->next = NULL;
	printf_fd(1, "ra\n");
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	*b = (*b)->next;
	ft_lstadd_back(b, tmp);
	tmp->next = NULL;
	printf_fd(1, "rb\n");
}

void	rotate_all(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a);
	*a = (*a)->next;
	ft_lstadd_back(a, tmp);
	tmp->next = NULL;
	tmp = (*b);
	*b = (*b)->next;
	ft_lstadd_back(b, tmp);
	tmp->next = NULL;
	printf_fd(1, "rr\n");
}
