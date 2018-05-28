/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:38:11 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/28 11:38:27 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count_char(int n)
{
	int count;
	int sign;

	sign = 1;
	count = 0;
	if (n < 0)
	{
		sign = -1;
		n = n * sign;
		count++;
	}
	while (n / 10 >= 1)
        {
                count++;
                n = n / 10;
        }
        count++;
//	printf("%d\n", count);
        return (count);
}

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0) && (nb > 0))
		return (1);
	else if ((power > 0) && (nb > 0))
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
	else
		return (0);
}

char    ft_get_num(int n, int count)
{
        if (n < 10)
                return (n);
        return (n / (ft_recursive_power(10,count)));
}

char	*ft_itoa(int n)
{
	char *str;
	int count;
	int len;

	count = ft_count_char(n);
	len = count;
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	while (count > 0)
	{
		if (n < 0)
		{
			*str = '-';
			n *= -1;
		} else
		{
			*str = (char)(ft_get_num(n, count - 1) + '0');
			n = n % ft_recursive_power(10, count - 1);
		}
		count--;
		str++;
	}
	*str = '\0';
//	printf("%s \n",str - len);
	return (str - len);
}

/*int main(void)
{
	ft_itoa(6);
	ft_itoa(13);
	ft_itoa(134);
	ft_itoa(-1);
	ft_itoa(-13);
        ft_itoa(-134);
	return (0);
}*/
