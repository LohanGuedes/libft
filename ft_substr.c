/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:53:16 by lguedes           #+#    #+#             */
/*   Updated: 2022/07/06 18:53:17 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i_start;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	i_start = 0;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && i_start < len)
			substr[i_start++] = s[i];
		i++;
	}
	substr[i_start] = '\0';
	return (substr);
}
