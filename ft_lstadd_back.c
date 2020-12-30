/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 16:19:23 by gde-matt          #+#    #+#             */
/*   Updated: 2020/01/31 16:42:19 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;

	if ((*lst) == 0)
	{
		(*lst) = new;
		return ;
	}
	aux = (*lst);
	while (aux->next != 0)
		aux = aux->next;
	aux->next = new;
}
