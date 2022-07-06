/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:01:57 by lguedes           #+#    #+#             */
/*   Updated: 2022/07/06 18:01:58 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sorc;
	char		*lastd;
	const char	*lasts;

	dest = dst;
	sorc = src;
	if (dst == NULL && src == NULL)
		return (0);
	if (dest < sorc)
	{
		while (len-- > 0)
		{
			*dest++ = *sorc++;
		}
	}
	else
	{
		lastd = dest + (len - 1);
		lasts = sorc + (len - 1);
		while (len-- > 0)
			*lastd-- = *lasts--;
	}
	return (dst);
}
