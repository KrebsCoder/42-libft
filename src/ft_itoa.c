/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prafael- <prafael-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:19:26 by prafael-          #+#    #+#             */
/*   Updated: 2021/09/09 19:03:36 by prafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_size(long int n)
{
	if (n < 0)
		return (1 + ft_count_size(-n));
	if (n <= 9)
		return (1);
	else
		return (1 + ft_count_size(n / 10));
}

static void	ft_populate_loop(char *new, int n, int size)
{
	if (n < 0)
	{
		new[0] = '-';
		n *= -1;
	}
	if (n > 9)
		ft_populate_loop(new, n / 10, size - 1);
	new[size] = (n % 10) + 48;
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*int_str;
	int		flag;

	flag = 0;
	if (n <= INT_MIN)
	{
		n = -INT_MAX;
		flag = 1;
	}
	size = ft_count_size(n);
	int_str = ft_calloc(size + 1, sizeof(char));
	if (!int_str)
		return (NULL);
	int_str[size--] = 0;
	ft_populate_loop(int_str, n, size);
	if (flag == 1)
		int_str[size] += flag;
	return (int_str);
}
