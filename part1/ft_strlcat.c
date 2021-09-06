/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prafael- <prafael-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:42:36 by prafael-          #+#    #+#             */
/*   Updated: 2021/09/06 11:31:30 by prafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;
	size_t	d_len;

	i = 0;
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (size < d_len + 1)
		return (size + s_len);
	if (size >= d_len + 1)
	{
		while (src[i] != '\0' && d_len + i < size - 1)
		{
			dst[d_len + i] = src[i];
			i++;
		}
	}
	dst[d_len + i] = 0;
	return (d_len + s_len);
}
