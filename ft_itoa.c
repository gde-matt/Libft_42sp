/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 07:56:01 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 16:25:48 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		numberlen(int number)
{
	int count;

	count = 1;
	while (number / 10 != 0)
	{
		count++;
		number = number / 10;
	}
	return (count);
}

int		pot(int number, int potency)
{
	int pot;

	pot = 1;
	while (potency - 1 > 0)
	{
		pot = pot * number;
		potency--;
	}
	return (pot);
}

char	*numberstr(char *str, int n, int len)
{
	int				div;
	int				i;
	int				digit;
	unsigned int	auxn;

	div = pot(10, len);
	i = 0;
	auxn = n;
	if (n < 0)
	{
		str[i] = '-';
		auxn = n * -1;
		i++;
	}
	while (div >= 1)
	{
		digit = auxn / div;
		str[i] = digit + '0';
		i++;
		auxn = auxn % div;
		div = div / 10;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = numberlen(n);
	if (n < 0)
		len = len + 1;
	if (!(str = (char*)malloc(len + 1)))
		return (NULL);
	numberstr(str, n, numberlen(n));
	return (str);
}
