/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:10:08 by mtavares          #+#    #+#             */
/*   Updated: 2022/03/30 21:56:44 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	chr;

	chr = (char)c;
	str = (char *)s;
	i = -1;
	while (++i <= ft_strlen(s))
		if (str[i] == chr)
			return (str + i);
	return (NULL);
}
