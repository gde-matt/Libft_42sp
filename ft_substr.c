/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 09:55:07 by gde-matt          #+#    #+#             */
/*   Updated: 2020/02/03 13:49:23 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (0);
	if (!(sub = malloc((len + 1) * sizeof(char))))
		return (0);
	if ((unsigned int)ft_strlen((char*)s) > start)
	{
		ft_memcpy(sub, (char*)s + start, len);
		sub[len] = 0;
	}
	else
		ft_bzero(sub, len + 1);
	return (sub);
}
