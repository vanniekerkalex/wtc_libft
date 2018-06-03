/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:42:47 by avan-ni           #+#    #+#             */
/*   Updated: 2018/06/03 18:25:13 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	length;
	size_t	count;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	length = ft_strlen((char *)needle);
	if (length == 0 || *needle == '\0')
		return ((char *)haystack);
	while (*(haystack + i) && (i + length) <= len && *haystack != '\0')
	{
		k = 0;
		count = 0;
		if (*(haystack + i) == *needle)
		{
			j = i;
			while (*(haystack + j++) == *(needle + k++) && (j + length) <= len)
				count++;
			if (count == length || length == 1)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	printf("%s", ft_strnstr("AAAAAAAAAAAAA","AAAAAAAAAAAAA",30));
	return (0);
}
