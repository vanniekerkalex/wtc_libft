/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:33:30 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/28 15:13:30 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wcount(s, c))
	{
		k = 0;
		if (!(str[i] = (char *)malloc(sizeof(char) *
						(ft_lcount(&s[j], c) + 1))))
			str[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][k++] = s[j++];
		str[i][k] = '\0';
		i++;
	}
	str[i] = 0;
	return (str);
}
