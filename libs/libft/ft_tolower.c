/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_lower_redone.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:17:25 by mtavares          #+#    #+#             */
/*   Updated: 2022/06/07 22:18:22 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	chr;

	if ((c > -129 && c < -1) || (c > -1 && c < 256))
	{
		chr = c;
		if (chr >= 'A' && chr <= 'Z')
			chr += 32;
		return (chr);
	}
	return (c);
}
