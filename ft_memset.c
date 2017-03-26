/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 02:40:26 by oabdalha          #+#    #+#             */
/*   Updated: 2017/03/21 23:35:13 by oabdalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *str, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			num;

	pointer = (unsigned char *)str;
	num = 0;
	while (n > 0)
	{
		pointer[num] = (unsigned char)c;
		num++;
		n--;
	}
	return (pointer);
}
