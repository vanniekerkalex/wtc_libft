/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:42:47 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/22 13:54:33 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int length;
	int count;
	int counter;

	counter = (int)len;
	length = ft_strlen((char *)needle);
	count = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && counter >= 0)
	{
		if (*haystack == needle[count])
			count++;
		else
			count = 0;
		if (count == length)
			return ((char *)(haystack - length + 1));
		haystack++;
		counter--;
	}
	return (NULL);
}
