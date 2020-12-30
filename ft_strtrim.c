/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:11:22 by gde-matt          #+#    #+#             */
/*   Updated: 2020/02/03 13:18:45 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		in_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		find_start(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (in_set(s1[i], set))
		i++;
	return (i);
}

int		find_end(char const *s1, char const *set)
{
	int i;

	i = ft_strlen((char*)s1) - 1;
	while (in_set(s1[i], set) && i)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	char	*trim;

	if (!s1)
		return (0);
	size = find_end(s1, set) - find_start(s1, set);
	if (size < 0)
	{
		trim = (char*)malloc(1 * sizeof(char));
		ft_bzero(trim, 1);
		return (trim);
	}
	if (!(trim = malloc(((size) + 2) * sizeof(char))))
		return (NULL);
	ft_memcpy(trim, (char*)s1 + find_start(s1, set), (size) + 1);
	trim[(size) + 1] = '\0';
	return (trim);
}
