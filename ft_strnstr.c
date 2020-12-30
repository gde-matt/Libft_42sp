/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:42:41 by gde-matt          #+#    #+#             */
/*   Updated: 2020/02/03 13:35:30 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle,
		unsigned long int len)
{
	unsigned long int ihaystack;
	unsigned long int ineedle;

	ihaystack = 0;
	if (ft_strlen((char*)needle) == 0)
		return ((char*)haystack);
	while (haystack[ihaystack] && ihaystack < len)
	{
		ineedle = 0;
		if (haystack[ihaystack] == needle[ineedle])
		{
			while ((haystack[ihaystack] == needle[ineedle])
					&& (needle[ineedle] != '\0')
					&& ihaystack < len)
			{
				ihaystack++;
				ineedle++;
			}
			if (needle[ineedle] == '\0')
				return ((char*)&haystack[ihaystack - ineedle]);
		}
		else
			ihaystack++;
	}
	return (0);
}
