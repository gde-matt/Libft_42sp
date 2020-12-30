/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:13:45 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 11:21:13 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned long int n)
{
	unsigned long int	i;
	unsigned char		*auxs1;
	unsigned char		*auxs2;

	auxs1 = (unsigned char *)s1;
	auxs2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (auxs1[i] != 0 || auxs2[i] != 0))
		if (auxs1[i] == auxs2[i])
			i++;
		else
			return (auxs1[i] - auxs2[i]);
	return (0);
}
