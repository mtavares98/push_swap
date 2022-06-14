/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:42:30 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/15 00:56:45 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix_sort(t_list **a, t_list **b, t_ps ps)
{
	ps.i = -1;
	ps.len = ft_lstsize(*a);
	while (++ps.i < ps.max_bits)
	{
		ps.j = 0;
		while (ps.j++ < ps.len)
		{
			ps.tmp = *a;
			if ((ps.tmp->content >> ps.i) == 1)
				rotate_a(a);
			else
				push_b(b, a);
		}
		while (ft_lstsize(*b) != 0)
			push_a(a, b);
	}
}

void	get_max_bits(t_ps *ps)
{
	ps->max_bits = -1;
	while ((ps->max >> ++ps->max_bits) != 0)
		;
}

void	rest(t_list **a, t_ps *ps)
{
	ps->tmp = *a;
	while (ps->tmp)
	{
		ps->tmp->content -= (ps->min * -1);
		ps->tmp = ps->tmp->next;
	}
}

void	add(t_list **a, t_ps *ps)
{
	ps->tmp = *a;
	while (ps->tmp)
	{
		ps->tmp->content += (ps->min * -1);
		ps->tmp = ps->tmp->next;
	}
	ps->max += (ps->min * -1);
}

void	algorithm_big(t_list **a, t_list **b)
{
	t_ps	ps;

	(void)b;
	ps.max = INT_MIN;
	ps.min = INT_MAX;
	have_max_min(*a, &ps.max, &ps.min);
	if (ps.min < 0)
		add(a, &ps);
	get_max_bits(&ps);
	printf_fd(1, "max_bits = %i\n", ps.max_bits);
	radix_sort(a, b, ps);
	rest(a, &ps);
}
