/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 09:23:03 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 15:51:25 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*dup;

	size = ft_strlen((char *)s1);
	if (!(dup = malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(dup, (char*)s1, size);
	dup[size] = 0;
	return (dup);
}
