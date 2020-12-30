/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 09:32:09 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 15:37:56 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, unsigned long int n)
{
	unsigned char		*auxdst;
	unsigned const char	*auxsrc;

	auxdst = dst;
	auxsrc = src;
	while (n > 0)
	{
		*auxdst = *auxsrc;
		if (*auxsrc == (unsigned char)c)
			return (++auxdst);
		auxdst++;
		auxsrc++;
		n--;
	}
	return (0);
}
