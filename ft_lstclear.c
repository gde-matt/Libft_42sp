/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 08:54:05 by gde-matt          #+#    #+#             */
/*   Updated: 2020/02/03 15:06:14 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *aux;

	while ((*lst) != NULL)
	{
		aux = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = aux;
	}
	(*lst) = NULL;
}
