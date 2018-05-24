/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:29:06 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/24 12:50:43 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	char *str;

	str = (char *)malloc(sizeof(char *) * (s + 1));
	if (!str)
		return (NULL);
	if (ft_strlen(s) > 0)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		while (*s != ' ' && *s != '\n' && *s != '\t' && *s != '\0')
			*str++ = *s++;
		if (*s == '\0')
			*str = *s;
		return (str);
	}
	return (NULL);
}

int main(void)
{
	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char	*s2 = "Hello \t  Please\n Trim me !";

	char	*ret = ft_strtrim(s1);
	printf("%s", ret);
	return(0);
}
