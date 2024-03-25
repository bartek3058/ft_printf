#include "ft_printf.h"

/*static int	idigits(unsigned int b)
{
	int	len;

	len = 0;
	while (b > 9)
	{
		b /= 10;
		len++;
	}
	return (len);
}*/

static void	put_unint(unsigned int b, size_t *counter)
{
	static char	digits[] = "0123456789";

	if (b > 9)
		put_unint(b / 10, counter);
	ft_putchar_pf(digits[b % 10], counter);
}

void	ft_putunint_pf(unsigned int b, size_t *counter)
{
	put_unint(b, counter);
}

