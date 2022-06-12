/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_inv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:27:48 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/11 21:12:32 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_inv(t_list **stack1)
{
	t_list	*tmp2;
	t_list	*tmp;

	tmp = ft_lstlast((*stack1));
	tmp2 = (*stack1);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	ft_lstadd_front(stack1, tmp);
	tmp2->next = NULL;
}

void	rotate_inv_all(t_list **stack1, t_list **stack2)
{
	rotate_inv(stack1);
	rotate_inv(stack2);
}
