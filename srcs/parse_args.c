/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 23:19:21 by mtavares          #+#    #+#             */
/*   Updated: 2022/10/31 16:45:21 by mtavares         ###   ########.fr       */
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
		if (n < INT_MIN || n > INT_MAX)
			return (2147483648);
		*str += 1;
	}
	while ((**str > 8 && **str < 14) || **str == 32)
		*str += 1;
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

static int	is_nbr(char *s)
{
	int	i;

	i = -1;
	while ((s[++i] > 8 && s[i] < 14) || s[i] == 32)
		;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (s[i] < '0' && s[i] > '9')
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] != '\0' && ((s[i] < 9 && s[i] > 15) || s[i] != 32))
		return (0);
	return (1);
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
		while (*s)
		{
			if (!is_nbr(s))
				exit_prog(a, NULL, 1);
			n = atoi_parse(&s);
			if (n > INT_MAX)
				exit_prog(a, NULL, 1);
			if (duplicate(*a, n))
				exit_prog(a, NULL, 1);
			new_node(a, n);
		}
	}
}
