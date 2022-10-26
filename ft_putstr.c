/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:08:45 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/26 02:11:05 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	if (s == NULL)
		ft_putstr("(null)", len);
	while (s && *s)
	{
		ft_putchar(*s, len);
		s++;
	}
}