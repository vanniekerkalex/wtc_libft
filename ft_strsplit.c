/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:33:30 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/24 16:29:30 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char **str;
	int count;
	int len;

	len = (int)ft_strlen(s) + 1;
	str = (char **)malloc(sizeof(char *) * len);
	if (!str)
		return (NULL);
	count = 0;
	while (count < len - 1)
	{
		*str++ = (char *)malloc(sizeof(char) * len);
		if (!*str)
		{
			printf("Memory Fail");
            return (NULL);
		}
		count++;
		printf("%d\n", count);
	}
	str = str - count;
	while (*s)
	{
		if (*s == c)
		{			
			**str = '\0';
			*str++ = (char *)s++;
		}
		**str++ = *s++;
	}
	return (str);
}

int main (void)
{
	char **str = ft_strsplit("myjdjdjdjdjdjdn", '*');

	while (str)
	{
	//	printf("%s", *str);
		str++;
	}
	return (0);
}
