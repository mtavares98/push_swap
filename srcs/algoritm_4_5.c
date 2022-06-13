/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm_4_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:13:52 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/13 22:38:25 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	algoritm_4_5(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		min;
	int		max;

	max = INT_MIN;
	min = INT_MAX;
	have_max_min(*a, &max, &min);
	while ((*a)->content != min)
		rotate_a(a);
	if ((*a)->content == min)
		push_b(b, a);
	while ((*a)->content != max)
		rotate_a(a);
	if ((*a)->content == max)
		push_b(b, a);
	algorithm_3(a);
	push_a(a, b);
	rotate_a(a);
	push_a(a, b);
}
