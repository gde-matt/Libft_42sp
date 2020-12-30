/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:48:57 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/27 16:43:39 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int len;

	len = ft_strlen((char*)s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i++;
	}
	return (0);
}
