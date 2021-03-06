/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 10:29:08 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/23 12:39:10 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long int len)
{
	unsigned char	*aux;

	aux = b;
	while (len > 0)
	{
		*aux = c;
		aux++;
		len--;
	}
	return (b);
}
