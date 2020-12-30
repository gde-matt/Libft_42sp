/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:12:56 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/23 13:11:14 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned long int n)
{
	unsigned char		auxc;
	unsigned const char	*auxs;

	auxs = s;
	auxc = c;
	while (n > 0)
	{
		if (*auxs == auxc)
			return ((void*)auxs);
		auxs++;
		n--;
	}
	return (0);
}
