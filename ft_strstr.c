/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:25:19 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/22 13:52:18 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int len;
	int count;

	len = ft_strlen((char *)needle);
	count = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == needle[count])
			count++;
		else
			count = 0;
		if (count == len)
			return ((char *)(haystack - len + 1));
		haystack++;
	}
	return (NULL);
}
