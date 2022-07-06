/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:56:53 by lguedes           #+#    #+#             */
/*   Updated: 2022/07/06 17:56:54 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start_node;
	t_list	*temp;

	if (!del || !lst)
		return ;
	start_node = *lst;
	while (start_node)
	{
		temp = start_node->next;
		ft_lstdelone(start_node, del);
		start_node = temp;
	}
	*lst = NULL;
}
