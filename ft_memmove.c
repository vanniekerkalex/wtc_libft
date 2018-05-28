/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:28:34 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/28 17:47:14 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ds;
	unsigned char *ss;

	ss = (unsigned char *)src;
	ds = (unsigned char *)dst;
	while (*ss && len)
	{
		*ds++ = *ss++;
		len--;
	}
	return (dst);
}
