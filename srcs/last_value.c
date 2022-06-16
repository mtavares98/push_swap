/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:35:45 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/16 15:39:25 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	last_value(t_list *a)
{
	a = ft_lstlast(a);
	return (a->content);
}
