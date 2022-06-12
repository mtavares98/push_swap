/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_inv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:27:48 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/12 16:25:37 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_inv_a(t_list **a)
{
	t_list	*tmp2;
	t_list	*tmp;

	tmp = ft_lstlast((*a));
	tmp2 = (*a);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(a, tmp);
	tmp2->next = NULL;
	printf_fd(1, "rra\n");
}

void	rotate_inv_b(t_list **b)
{
	t_list	*tmp2;
	t_list	*tmp;

	tmp = ft_lstlast((*b));
	tmp2 = (*b);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(b, tmp);
	tmp2->next = NULL;
	printf_fd(1, "rrb\n");
}

void	rotate_inv_all(t_list **a, t_list **b)
{
	t_list	*tmp2;
	t_list	*tmp;

	tmp = ft_lstlast((*a));
	tmp2 = (*a);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(a, tmp);
	tmp2->next = NULL;
	tmp = ft_lstlast((*b));
	tmp2 = (*b);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(b, tmp);
	tmp2->next = NULL;
	printf_fd(1, "rrr\n");
}
