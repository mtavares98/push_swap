/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:56:34 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/10 19:02:23 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*ft_lstnew_1(void *content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

int	main(void)
{
	int		n;
	t_stack	*a;
	t_stack	*b;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (0);
	b = malloc(sizeof(t_stack));
	if (!b)
		return (0);
	n = 5;
	a = ft_lstnew_1(&n);
	n = 6;
	a->next = ft_lstnew_1(&n);
	printf_fd(1, "stack a\n");
	printf_fd(1, "%i\n", a->content);
	printf_fd(1, "%i\n", a->next->content);
	swap(&a);
	printf_fd(1, "swap a\n");
	printf_fd(1, "%i\n", a->content);
	printf_fd(1, "%i\n", a->next->content);
}
