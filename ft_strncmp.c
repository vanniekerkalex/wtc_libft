/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:03:17 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/22 14:08:35 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int count;

	count = (int)n;
	while (*s1 == *s2 && *s1 && *s2 && count >= 0)
	{
		s1++;
		s2++;
		count--;
	}
	return ((unsigned int)(*s1 - *s2));
}
