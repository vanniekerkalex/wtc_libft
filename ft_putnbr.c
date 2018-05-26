#include "libft.h"

void	ft_putnbr(int n)
{
	ft_putstr(ft_itoa(n));
}

int main(void)
{
	ft_putnbr(25);
	return (0);
}
