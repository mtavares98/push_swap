/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:56:34 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/12 18:06:33 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*tmp;
	t_list	*a;

	a = NULL;
	(void)av;
	if (ac < 2)
	{
		printf_fd(1, "Wrong number of arguments\n");
		return (1);
	}
	parse_args(&a, av);
	if (ac == 4)
		alogoritm_3(&a);
	tmp = a;
	while (tmp)
	{
		printf_fd(1, "%i\n", tmp->content);
		tmp = tmp->next;
	}
	exit_prog(&a, 1);
	return (0);
}
