int ft_isint(int c)
{
	if (c <= 2147483647 && c >= -2147483648)
		return (1);
	return (0);
}
