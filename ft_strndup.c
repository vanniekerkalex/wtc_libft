/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:29:30 by avan-ni           #+#    #+#             */
/*   Updated: 2018/06/01 12:29:32 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	len;

	len = n;
	if (!(str = ft_strnew(n)))
		return (NULL);
	while (*s1 && n)
	{
		*str++ = *s1++;
		n--;
	}
	return (str - len);
}
