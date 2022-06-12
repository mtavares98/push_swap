/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:17:10 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/11 22:06:03 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack)->next;
	ft_lstadd_back(&tmp, (*stack));
	(*stack) = tmp;
	tmp = ft_lstlast((*stack));
	tmp->next = NULL;
}

void	rotate_all(t_list **stack1, t_list **stack2)
{
	rotate(stack1);
	rotate(stack2);
}
