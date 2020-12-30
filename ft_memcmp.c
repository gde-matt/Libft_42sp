/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:03:54 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/23 11:19:18 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned long int n)
{
	unsigned const char *auxs1;
	unsigned const char *auxs2;

	auxs1 = s1;
	auxs2 = s2;
	while (n > 0)
	{
		if (*auxs1 != *auxs2)
			return (*auxs1 - *auxs2);
		auxs1++;
		auxs2++;
		n--;
	}
	return (0);
}
