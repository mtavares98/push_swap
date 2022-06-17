/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:36:25 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/17 19:01:45 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	put_index(t_list **a)
{
	t_list	*tmp;
	int		min;
	int		i;

	i = 0;
	min = INT_MAX;
	tmp = *a;
	while (++i <= ft_lstsize(*a))
	{
		while (tmp)
		{
			if (min > tmp->content && tmp->index == 0)
				min = tmp->content;
			tmp = tmp->next;
		}
		while (tmp->content != min)
			tmp = tmp->next;
		tmp->index = min;
	}
}
