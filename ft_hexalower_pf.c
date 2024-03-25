#include "ft_printf.h"

static void	ft_hexa(unsigned int b, size_t *counter)
{
	static char	hexalower[] = "0123456789abcdef";

	if (b >= 16)
		ft_hexa(b / 16, counter);
	ft_putchar_pf(hexalower[b % 16], counter);
}

void	ft_hexalower_pf(unsigned int b, size_t *counter)
{
	ft_hexa(b, counter);
}
