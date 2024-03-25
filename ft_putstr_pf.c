/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:50:15 by brogalsk          #+#    #+#             */
/*   Updated: 2024/03/17 17:16:24 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *s, size_t *counter)
{
	if (!s)
		s = "(null)";
	while(*s)
	{
		write(1, s, 1);
		*counter += 1;
		s++;
	}
}
