/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:14:41 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/24 15:14:43 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char *s, char c);
static int	sub_len(char *s, char c);
static void	free_fail(char **s, size_t len);

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		splits;
	int		offset;
	int		substring;
	char	*str;

	str = (char *)s;
	offset = 0;
	splits = count_splits(str, c);
	final = malloc(sizeof(char *) * (splits + 1));
	if (final == NULL)
		return (NULL);
	final[splits] = NULL;
	while (offset < splits)
	{
		while (*str != '\0' && *str == c)
			str++;
		substring = sub_len(str, c);
		final[offset] = ft_substr(str, 0, substring);
		if (!final[offset++])
			free_fail(final, offset);
		str += substring;
	}
	return (final);
}

static int	count_splits(char *str, char c)
{
	int	sublen;
	int	splitnum;

	splitnum = 0;
	while (*str != '\0')
	{
		while (*str && *str == c)
			str++;
		sublen = sub_len(str, c);
		str += sublen;
		if (sublen)
			splitnum++;
	}
	return (splitnum);
}

static int	sub_len(char *str, char c)
{
	int	len;

	len = 0;
	while (*str != '\0' && *str != c)
	{
		str++;
		len++;
	}
	return (len);
}

static void	free_fail(char **s, size_t len)
{
	while (len-- > 0)
		free(s[len]);
	free(s);
}
