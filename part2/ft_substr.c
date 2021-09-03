/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prafael- <prafael-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:19:50 by prafael-          #+#    #+#             */
/*   Updated: 2021/09/03 13:21:04 by prafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//a vida eh loka

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	if (s_len < start + len)
	{
		res = ft_calloc(s_len - start + 1, sizeof(char));
		ft_strlcpy(res, s + start, s_len - start + 1);
		return (res);
	}
	res = ft_calloc(len + 1, sizeof(char));
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
