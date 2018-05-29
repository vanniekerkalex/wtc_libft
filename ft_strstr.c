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
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;

	len = ft_strlen((char *)needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (!ft_strncmp(haystack, needle, len))
		{
			printf("%s", (char *)haystack);
			return ((char *)haystack);
		}	
		haystack++;
	}
	return (NULL);
}

int main(void)
{
	ft_strstr("see F your F return FF now FF","FF");
	return (0);
}
