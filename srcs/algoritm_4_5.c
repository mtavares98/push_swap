/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm_4_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:13:52 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/19 15:30:46 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	algoritm_4_5(t_list **a, t_list **b)
{
	int		min;
	int		max;

	max = INT_MIN;
	min = INT_MAX;
	have_max_min(*a, &max, &min);
	while ((*a)->index != min && (*a)->index != max)
		rotate_a(a);
	push_b(b, a);
	if (ft_lstsize(*a) > 3)
	{
		while ((*a)->index != max && (*a)->index != min)
			rotate_a(a);
		push_b(b, a);
	}
	algorithm_3(a);
	if (ft_lstsize(*b) == 2 && (*b)->index < (*b)->next->index)
		rotate_b(b);
	push_a(a, b);
	if ((*a)->index > (*a)->next->index)
		rotate_a(a);
	push_a(a, b);
}
