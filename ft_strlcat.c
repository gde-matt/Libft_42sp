/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:02:11 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/27 16:41:39 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long int	ft_strlcat(char *dst, const char *src,
		unsigned long int dstsize)
{
	unsigned int i;
	unsigned int size;
	unsigned int sum;

	if (dstsize == 0)
		return (ft_strlen((char*)src));
	else
	{
		size = ft_strlen(dst);
		if (size > dstsize - 1)
			return (ft_strlen((char*)src) + dstsize);
		else
		{
			i = 0;
			sum = ft_strlen(dst) + ft_strlen((char*)src);
			while (size < dstsize - 1 && src[i] != '\0')
			{
				dst[size] = src[i];
				size++;
				i++;
			}
			dst[size] = '\0';
			return (sum);
		}
	}
}
