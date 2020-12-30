/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 09:16:19 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/29 11:59:19 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		numlen(int number)
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

int		ft_pot(int number, int potency)
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

void	ft_putnbr_fd(int n, int fd)
{
	int				div;
	char			digit;
	unsigned int	auxn;

	div = ft_pot(10, numlen(n));
	auxn = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		auxn = n * -1;
	}
	while (div >= 1)
	{
		digit = auxn / div + '0';
		write(fd, &digit, 1);
		auxn = auxn % div;
		div = div / 10;
	}
}
