/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:37:49 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/12 01:43:08 by mtavares         ###   ########.fr       */
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
			while ((*stack)->next)
			{
				tmp = (*stack);
				(*stack) = (*stack)->next;
				free(tmp);
			}
		}
	}
}

void	exit_prog(t_list **a, int i)
{
	free_lst(a);
	exit(i);
}
