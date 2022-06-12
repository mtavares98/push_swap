/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:44:38 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/11 22:05:45 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_list **stack1, t_list **stack2)
{
	t_list	*tmp;

	if (!(*stack2))
		return ;
	tmp = (*stack2)->next;
	ft_lstadd_front(stack1, (*stack2));
	(*stack2) = tmp;
}
