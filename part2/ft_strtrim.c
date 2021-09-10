/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prafael- <prafael-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:19:48 by prafael-          #+#    #+#             */
/*   Updated: 2021/09/09 21:11:55 by prafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(char const *s1, char const *set, size_t start_find);
static size_t	get_end(char const *s1, char const *set, size_t start_find);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	size_t	start;
	size_t	end;
	char	*res;

	if (s1 == NULL || set == NULL)
		return (NULL);
	str_len = ft_strlen(s1);
	start = get_start(s1, set, 0);
	end = get_end(s1, set, str_len);
	res = ft_substr(s1, start, str_len - end - start);
	return (res);
}

static size_t	get_start(char const *s1, char const *set, size_t start_find)
{
	size_t	count;
	size_t	i;

	count = 0;
	while (start_find == count)
	{
		i = 0;
		while (set[i] != 0)
		{
			if (s1[start_find] == set[i])
				count++;
			i++;
		}
		start_find++;
	}
	return (count);
}

static size_t	get_end(char const *s1, char const *set, size_t start_find)
{
	size_t	end;
	size_t	count;
	size_t	i;

	count = 0;
	end = ft_strlen(s1);
	while (end - start_find == count)
	{
		i = 0;
		while (set[i] != 0)
		{
			if (s1[start_find - 1] == set[i])
				count++;
			i++;
		}
		start_find--;
	}
	return (count);
}
