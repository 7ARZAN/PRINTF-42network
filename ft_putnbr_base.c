/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:15:07 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/26 02:57:11 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int n, char c, int *len)
{
	unsigned int	base_len;
	char			*base;

	base_len = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < base_len)
		ft_putchar(base[n % base_len], len);
	else
	{
		ft_putnbr_base(n / base_len, c, len);
		ft_putnbr_base(n % base_len, c, len);
	}
}
