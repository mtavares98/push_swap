/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:42:30 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/16 19:05:31 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	get_average(t_list *a)
{
	int	counter;
	int	sum;

	counter = 0;
	sum = 0;
	while (a)
	{
		counter++;
		sum += a->content;
		a = a->next;
	}
	return (sum / counter);
}

static int	compare_average(t_list *a, int average)
{
	while (a)
	{
		if (a->content < average)
			return (1);
		a = a->next;
	}
	return (0);
}

void	algorithm_big_2(t_list **a, t_list **b, t_list *average)
{
	t_list	*tmp;

	if ((*a)->content > (*a)->next->content)
		swap_a(a);
	push_b(b, a);
	free(ft_lstlast(average));
	tmp = ft_lstlast(average);
	while (average)
	{
		if ((*b)->content > tmp->content)
		{
			if ((*a)->content == (*b)->content + 1)
				push_a(a, b);
			else if ((*a)->content == ft_lstlast(*b) + 1)
			{
				rotate_inv_b(b);
				push_a(a, b);
			}
		}
		else
			rotate_b(b);
		free(ft_lstlast(average));
		tmp = ft_lstlast(average);
	}
}

void	algorithm_big(t_list **a, t_list **b)
{
	t_list		*average;
	t_list		*tmp;

	while (ft_lstsize(*a) != 2)
	{
		ft_lstadd_back(&average, get_average(*a));
		tmp = ft_lstlast(average);
		while (compare_average(*a, tmp->content))
		{
			if ((*a)->content < tmp->content)
				push_b(b, a);
			else if (last_value(*a) < tmp->content)
			{
				rotate_inv_a(a);
				push_b(b, a);
			}
			else
				rotate_a(a);
		}
		tmp = tmp->next;
	}
	algorithm_big_2(a, b, average);
}
