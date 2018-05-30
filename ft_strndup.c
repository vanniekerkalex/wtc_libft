#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	len;

	len = n;
	if (!(str = ft_strnew(n)))
		return (NULL);
	while (*s1 && n)
	{
		*str++ = *s1++;
		n--;
	}
	return (str - len);
}
