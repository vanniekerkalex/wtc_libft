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

	str = (char *)malloc(sizeof(s) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while ((char)*s && f)
	{
		*str = f(*s);
		s++;
		str++;
	}
	*str = '\0';
	return (str - ft_strlen(s));
}
