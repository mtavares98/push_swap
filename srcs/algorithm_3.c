/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:46:54 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/17 18:57:04 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	have_max_min(t_list *a, int *max, int *min)
{
	while (a)
	{
		if (a->index > *max)
			*max = a->index;
		if (a->index < *min)
			*min = a->index;
		a = a->next;
	}
}

void	algorithm_3(t_list **a)
{
	int	n[3];
	int	max;
	int	min;

	max = INT_MIN;
	min = INT_MAX;
	have_max_min(*a, &max, &min);
	n[0] = (*a)->index;
	n[1] = (*a)->next->index;
	n[2] = (*a)->next->next->index;
	if ((n[2] == max || n[2] == min) && n[0] > n[1])
		swap_a(a);
	else if (n[2] != max && n[2] != min && n[0] < n[1])
		swap_a(a);
	if (is_finished(*a, NULL))
		return ;
	if (n[2] == min)
		rotate_inv_a(a);
	else
		rotate_a(a);
}
