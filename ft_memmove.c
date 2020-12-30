/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:52:20 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 15:41:43 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, long unsigned int len)
{
	unsigned char		*auxd;
	unsigned const char *auxs;
	unsigned char		*lastd;
	unsigned const char	*lasts;

	if (!src && !dst)
		return (0);
	auxd = dst;
	auxs = src;
	if (auxd < auxs)
	{
		while (len-- > 0)
			*auxd++ = *auxs++;
	}
	else
	{
		lastd = auxd + (len - 1);
		lasts = auxs + (len - 1);
		while (len-- > 0)
			*lastd-- = *lasts--;
	}
	return (dst);
}
