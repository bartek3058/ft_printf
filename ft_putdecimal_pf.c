#include "ft_printf.h"

/*static size_t	i_digits(int a)
{
	size_t len;

	len = 0;
	if (a < 0)
	{
		len += 1;
		len *= -1;
	}
	if (a == 0)
		len++;
	while (a > 0)
	{
		a /= 10;
		len++;
	}
	return (len);
}*/

static void	put_int(int a, size_t *counter)
{
	static char	digits[] = "0123456789";

	if (a > 9)
		put_int(a / 10, counter);
	ft_putchar_pf(digits[a % 10], counter);
}

void	ft_putdecimal_pf(int a, size_t *counter)
{
	if (a == INT_MIN)
	{
	ft_putdecimal_pf((a / 10), counter);
	ft_putchar_pf('8', counter);
	}
	if (a < 0)
	{
		write(1, "-", 1);
		a *= -1;
		(*counter)++;
	}
	put_int(a, counter);
}
