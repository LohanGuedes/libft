/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:00:59 by lguedes           #+#    #+#             */
/*   Updated: 2022/07/06 18:01:00 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastnode;

	if (lst == NULL)
		return (NULL);
	lastnode = lst;
	while (lst->next != NULL)
	{
		lastnode = lst->next;
		lst = lst->next;
	}
	return (lastnode);
}
