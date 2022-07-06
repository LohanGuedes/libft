/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:52:45 by lguedes           #+#    #+#             */
/*   Updated: 2022/07/06 18:52:46 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	sz_temp;

	sz_temp = ft_strlen(s);
	while (sz_temp >= 0)
	{
		if (s[sz_temp] == (char)c)
			return ((char *)&s[sz_temp]);
		sz_temp--;
	}
	return ((char *)0);
}
