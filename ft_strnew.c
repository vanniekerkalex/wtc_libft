#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ((int)size + 1));
	if (!str)
		return (NULL);
	while (i <= (int)size)
		str[i] = '\0';
	return (str);
}
