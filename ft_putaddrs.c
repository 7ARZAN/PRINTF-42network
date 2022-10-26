/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:26:08 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/26 03:22:37 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddrs_hex(unsigned long int n, char c, int *len)
{
	unsigned long int	base_len;
	char				*base;

	base_len = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < base_len)
		ft_putchar(base[n % base_len], len);
	else
	{
		ft_putaddrs_hex(n / base_len, c, len);
		ft_putaddrs_hex(n % base_len, c, len);
	}
}

void	ft_putaddrs(void *addrs, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)addrs;
	ft_putstr("0x", len);
	ft_putaddrs_hex(ptr, 'x', len);
}
