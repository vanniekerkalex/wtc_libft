/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:29:06 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/24 14:29:32 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		count;

	count = 0;
	str = (char *)malloc(sizeof(char) * ((int)ft_strlen(s) + 1));
	if ((int)ft_strlen(s) > 0 && str)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		while (*s)
		{
			*str++ = *s++;
			count++;
		}
		while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\0')
		{
			*str-- = *s--;
			count--;
		}
		str++;
		count++;
		*str = '\0';
		return (str - count);
	}
	return (NULL);
}
