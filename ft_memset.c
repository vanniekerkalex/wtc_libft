/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:47:49 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/21 17:09:15 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len)
	{
		*ptr++ = (unsigned char)c;
		len--;
	}
	return (b);	
}
