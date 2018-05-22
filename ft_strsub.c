/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:51:34 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/22 16:07:15 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int				size;
	char			*str;
	unsigned int	i;

	i = 0;
	size = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < start)
	{
		s++;
		i++;
	}
	while (i < start + (unsigned int)len)
	{
		*str++ = *s++;
		i++;
	}
	*str = '\0';
	return ((char *)str - (unsigned int)len);
}
