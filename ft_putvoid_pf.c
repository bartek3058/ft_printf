/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:16:41 by brogalsk          #+#    #+#             */
/*   Updated: 2024/03/17 17:35:53 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t is_digits(unsigned long long s)
{
	size_t len;

	len = 0;
	if (s == 0)
		return (1);
	while (s > 0)
	{
		s /= 16;
		len++;
	}
	return (len);
}

static void	put_void(unsigned long long s)
{
	static char	digits[] = "0123456789abcdef";

	if (s >= 16)
		put_void(s / 16);
	write(1, &digits[s % 16], 1);
}

void	ft_putvoid_pf(void *s, size_t *counter)
{
	size_t	len;

	if (!s)
	{
		write(1, "(nil)", 5);
		*counter += 5;
	}
	else
	{
	len = is_digits((unsigned long long)s);
	write(1, "0x", 2);
	put_void((unsigned long long)s);
	*counter += 2;
	*counter += len;
	}
}	

