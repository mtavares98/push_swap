/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:56:34 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/12 01:58:00 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*tmp;
	t_list	*a;

	if (ac < 2)
	{
		printf_fd(1, "Wrong number of arguments\n");
		return (0);
	}
	parse_args(&a, av);
	tmp = a;
	while (tmp)
	{
		printf_fd(1, "%i\n", tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
