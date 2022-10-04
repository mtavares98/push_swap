/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:56:34 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/21 14:12:48 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*b;
	t_list	*a;

	a = NULL;
	b = NULL;
	if (ac == 1)
		exit(0);
	parse_args(&a, av);
	put_index(&a);
	if (is_finished(a, b))
		exit_prog(&a, &b, 0);
	if (ft_lstsize(a) == 2)
		algorithm_2(&a);
	if (ft_lstsize(a) == 3)
		algorithm_3(&a);
	if (ft_lstsize(a) == 4 || ft_lstsize(a) == 5)
		algoritm_4_5(&a, &b);
	if (ft_lstsize(a) > 5)
		algorithm_big(&a, &b);
	exit_prog(&a, &b, 0);
	return (0);
}
