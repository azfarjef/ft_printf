/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:44:33 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/08/30 20:49:02 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	put_hex(unsigned long long nbr, char format)
{
	if (nbr > 15)
	{
		put_hex(nbr / 16, format);
		put_hex(nbr % 16, format);
	}
	else
	{
		if (nbr < 10)
			ft_putchar(nbr + '0');
		else
		{
			if (format == 'x')
				ft_putchar(nbr - 10 + 'a');
			else
				ft_putchar(nbr  - 10 + 'A');
		}
	}
}

static void	hex_flag(t_set *set, unsigned long long nbr, int nbrlen, int prec)
{
	set->width++;
	if (set->flag[e_minus] == '1')
	{
		ft_putnchar('0', prec);
		if (set->point != 1 || nbr != 0)
			put_hex(nbr, *set->format);
		if (set->width > nbrlen)
			while (--set->width > nbrlen + prec)
				ft_putchar(' ');
	}
	else
	{
		if (set->width > nbrlen && (set->point != 0 || set->flag[e_zero] != '1'))
			while (--set->width > nbrlen + prec)
				ft_putchar(' ');
		if (set->width > nbrlen && set->point == 0 && set->flag[e_zero] == '1')
			while (--set->width > nbrlen + prec)
				ft_putchar('0');
		ft_putnchar('0', prec);
		if (set->point != 1 || nbr != 0)
			put_hex(nbr, *set->format);
	}
}

void	ft_out_hex(t_set *set)
{
	unsigned long long	nbr;
	unsigned long long	tmp;
	int					nbrlen;
	int					prec;

	nbr = (unsigned int)(va_arg(set->arg, unsigned long long));
	tmp = nbr;
	nbrlen = 0;
	if (tmp == 0 && set->point != 1)
		nbrlen++;
	while (tmp > 0)
	{
		tmp /= 16;
		nbrlen++;
	}
	prec = set->precision - nbrlen;
	if (prec < 0)
		prec = 0;
	if (set->width <= set->precision)
		set->total_len = set->total_len + prec;
	if (set->width > nbrlen && set->width > set->precision)
		set->total_len = set->total_len + (set->width - nbrlen);
	hex_flag(set, nbr, nbrlen, prec);
	set->total_len = set->total_len + nbrlen;
	set->format++;
}
