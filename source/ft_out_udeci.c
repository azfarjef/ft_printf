/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out_udeci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 07:43:33 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/08/19 10:25:15 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	putudeci(unsigned long long nbr)
{
	if (nbr > 9)
	{
		putudeci(nbr / 10);
		ft_putchar('0' + (nbr % 10));
	}
	else
		ft_putchar(nbr + '0');
}

static void	udeci_width(t_set *set, unsigned long long nbr, int nbrlen, int prec)
{
	if (set->flag[e_zero] == '1' && (set->flag[e_minus] != '1' && prec == 0))
	{
		if (set->point != 0)
			while (--set->width > nbrlen)
				ft_putchar(' ');
		else
			while (--set->width > nbrlen)
				ft_putchar('0');
	}
	else
	{
		if (set->point != 1 || nbr != 0)
			while (--set->width > nbrlen + prec)
				ft_putchar(' ');
		else
			while (--set->width > 0)
				ft_putchar(' ');
	}
}

static void	udeci_flag(t_set *set, unsigned long long nbr, int nbrlen, int prec)
{
	if (set->flag[e_minus] == '1' && (set->point != 1 || nbr != 0))
	{
		ft_putnchar('0', prec);
		putudeci(nbr);
	}
	if (set->width > nbrlen)
	{
		set->width++;
		udeci_width(set, nbr, nbrlen, prec);
	}
	if (set->flag[e_minus] != '1' && (set->point != 1 || nbr != 0))
	{
		ft_putnchar('0', prec);
		putudeci(nbr);
	}
}

void	ft_out_udeci(t_set *set)
{
	unsigned long long	nbr;
	unsigned long long	tmp;
	int					prec;
	int					nbrlen;

	nbrlen = 0;
	nbr = (unsigned int)(va_arg(set->arg, long long));
	tmp = nbr;
	while (tmp > 0)
	{
		tmp /= 10;
		nbrlen++;		
	}
	if (set->point != 1 && tmp == 0)
		nbrlen++;
	prec = set->precision - nbrlen;
	if (prec < 0)
		prec = 0;
	if (set->width <= set->precision)
		set->total_len = set->total_len + prec;
	if (set->width > nbrlen && set->width > set->precision)
		set->total_len = set->total_len + (set->width - nbrlen);
	udeci_flag(set, nbr, nbrlen, prec);
	set->total_len = set->total_len + nbrlen;
	set->format++;
}
