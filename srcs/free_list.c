/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:37:49 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/13 20:21:15 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_lst(t_list **stack)
{
	t_list	*tmp;

	if (stack)
	{
		if (*stack)
		{
			while ((*stack))
			{
				tmp = (*stack);
				(*stack) = (*stack)->next;
				free(tmp);
			}
		}
	}
}

void	exit_prog(t_list **a, t_list **b, int i)
{
	if (i != 0)
		printf_fd(2, "Error\n");
	free_lst(a);
	free_lst(b);
	exit(i);
}
