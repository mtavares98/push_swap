/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:59:40 by mtavares          #+#    #+#             */
/*   Updated: 2022/03/30 22:03:26 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	chr = (unsigned char)c;
	str = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (*(str + i) == chr)
			return (str + i);
	return (NULL);
}
