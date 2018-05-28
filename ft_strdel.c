#include "libft.h"

void ft_strdel(char **as)
{
	int count;

	int = 0;
	while (*as)
	{
		while (**as)
		{
			free (**as);
			*as++;
		}
		as++;
		count++;
	}
	as = as - count;
       	as = NULL;
}
