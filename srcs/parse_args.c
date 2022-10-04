/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 23:19:21 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/21 17:58:47 by mtavares         ###   ########.fr       */
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
}

static long	atoi_parse(char **str)
{
	int			s;
	long long	n;

	s = 1;
	n = 0;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			s *= -1;
		*str += 1;
	}
	while (**str >= '0' && **str <= '9')
	{
		n = n * 10 + s * (**str - '0');
		if (n < INT_MIN || n > INT_MAX)
			return (2147483648);
		*str += 1;
	}
	if (!((**str > 8 && **str < 14) || **str == 32) && **str != '\0')
		return (2147483648);
	return (n);
}

static int	duplicate(t_list *a, int n)
{
	while (a)
	{
		if (a->content == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	parse_args(t_list **a, char **av)
{
	char		*s;
	long long	n;
	int			i;

	i = 0;
	n = 0;
	while (av[++i])
	{
		s = av[i];
		while ((*s > 8 && *s < 14) || *s == 32)
				s++;
		if (!*s || ((*s == '+' || *s == '-') && !s[1]))
			exit_prog(a, NULL, 1);
		while (*s)
		{
			while ((*s > 8 && *s < 14) || *s == 32)
				s++;
			n = atoi_parse(&s);
			if (n > INT_MAX)
				exit_prog(a, NULL, 1);
			if (duplicate(*a, n))
				exit_prog(a, NULL, 1);
			new_node(a, n);
		}
	}	
}
