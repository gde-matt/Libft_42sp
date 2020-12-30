/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:37:13 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 15:58:54 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*join;

	if (!s1)
		return (0);
	size = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(join = malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(join, (char*)s1, ft_strlen((char*)s1));
	ft_memcpy(join + ft_strlen((char*)s1), (char*)s2, ft_strlen((char*)s2));
	join[size] = 0;
	return (join);
}
