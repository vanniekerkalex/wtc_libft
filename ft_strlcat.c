/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:57:41 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/28 15:25:00 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	length;

	length = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize != 0 && dstsize > length)
	{
		while (dst[i])
			i++;
		while (j < (dstsize - length - 1) && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src) + length);
}
