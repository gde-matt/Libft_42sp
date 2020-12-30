/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:44:00 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 15:46:05 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long unsigned int	ft_strlcpy(char *dst, const char *src,
		long unsigned int dstsize)
{
	unsigned long int	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if (dstsize == 0)
		return (ft_strlen((char*)src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char*)src));
}
