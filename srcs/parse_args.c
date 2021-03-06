/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 23:19:21 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/17 20:58:32 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	new_node(t_list **a, int n)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		exit_prog(a, NULL, 1);
	new_node->content = n;
	new_node->index = 0;
	new_node->next = NULL;
	ft_lstadd_back(a, new_node);
	if (!a)
		exit_prog(a, NULL, 1);
}

static long	atoi_parse(char **str)
{
	int			s;
	long long	n;

	s = 1;
	n = 0;
	while ((**str > 8 && **str < 14) || **str == 32)
		*str += 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			s *= -1;
		*str += 1;
	}
	while (**str >= '0' && **str <= '9')
	{
		n = n * 10 + s * (**str - '0');
		if (n < -2147483648 || n > 2147483647)
			return (2147483648);
		*str += 1;
	}
	while ((**str > 8 && **str < 14) || **str == 32)
		*str += 1;
	if (!(**str >= '0' && **str <= '9') && **str != '\0')
		return (2147483648);
	return (n);
}

static int	duplicate(t_list **a, int n)
{
	t_list	*tmp;

	tmp = (*a);
	while (tmp)
	{
		if (tmp->content == n)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	parse_args(t_list **a, char **av)
{
	char		b;
	long long	n;
	int			i;

	i = 0;
	b = 0;
	n = 0;
	while (av[++i])
	{
		if (av[i][0] == '\0')
			exit_prog(a, NULL, 1);
		while (av[i][0])
		{
			n = atoi_parse(&av[i]);
			if (n > INT_MAX)
				exit_prog(a, NULL, 1);
			if (b && duplicate(a, n))
				exit_prog(a, NULL, 1);
			new_node(a, n);
			b = 1;
		}
	}	
}
