/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:49:35 by mtavares          #+#    #+#             */
/*   Updated: 2022/03/30 22:00:53 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	chr;
	char	*str;

	str = (char *)s;
	chr = (char)c;
	i = ft_strlen(str) + 1;
	while (--i > -1)
		if (str[i] == chr)
			return (str + i);
	return (NULL);
}
