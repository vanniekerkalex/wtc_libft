/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:48:05 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/22 15:10:49 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	size_t len;

	len = ft_strlen(s);
	if(!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s && f)
		*str++ = (f)(*s++);
	*str = '\0';
	return (str - len);
}
