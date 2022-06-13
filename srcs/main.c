/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:56:34 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/13 22:37:21 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*b;
	t_list	*a;

	a = NULL;
	b = NULL;
	if (ac < 2)
		exit_prog(&a, &b, 1);
	parse_args(&a, av);
	if (is_finished(a, NULL) == 1)
		exit_prog(&a, &b, 0);
	if (ac == 3)
		algorithm_2(&a);
	if (ac == 4)
		algorithm_3(&a);
	if (ac == 5 || ac == 6)
		algoritm_4_5(&a, &b);
	exit_prog(&a, &b, 0);
	return (0);
}
