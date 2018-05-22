/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:18:13 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/22 15:22:43 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(s) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while ((char)*s && f)
	{
		*str = f(i, *s);
		s++;
		str++;
	}
	*str = '\0';
	return (str - ft_strlen(s));
}
