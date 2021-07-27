/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:56:16 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/07/17 14:09:29 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ptr_hex(unsigned long long addr)
{
	if (addr > 15)
	{
		ptr_hex(addr / 16);
		ptr_hex(addr % 16);
	}
	else
	{
		if (addr > 9)
			ft_putchar(addr - 10 + 'a');
		else
			ft_putchar(addr + '0');
	}
}

static void	ptr_width(t_set *set, int addrlen, int prec)
{
	if (set->width > 0)
	{
		set->total_len = set->total_len + set->width - addrlen;
		set->width++;
		if (set->flag[e_minus] != '1' && set->flag[e_zero] == '1' && prec != 0)
			while (--set->width > addrlen)
				ft_putchar('0');
		else
			while (--set->width > addrlen + prec)
				ft_putchar(' ');
	}
}

static void	ptr_print(t_set *set, unsigned long long addr, int addrlen, int prec)
{
	if ((set->flag[e_zero] == '1' && prec == 0) || set->flag[e_minus] == '1')
	{
		ft_putstr("0x");
		ft_putnchar('0', prec);
	}
	if (set->flag[e_minus] == '1' && (addr != 0 || set->point != 1))
		ptr_hex(addr);
	ptr_width(set, addrlen, prec);
	if (set->flag[e_minus] != '1' && (set->flag[e_zero] != '1' || prec != 0))
	{
		ft_putstr("0x");
		if(addr == 0)
			prec = 1;
		ft_putnchar('0', prec);
	}
	if (set->flag[e_minus] != '1' && (addr != 0 && set->point != 1))
		ptr_hex(addr);
}

void	ft_out_pointer(t_set *set)
{
	int					addrlen;
	int					prec;
	unsigned long long	addr;
	unsigned long long	tmp;

	addr = (unsigned long long)va_arg(set->arg, void *);
	addrlen = 2;
	tmp = addr;
	while (tmp > 0)
	{
		tmp /= 16;
		addrlen++;
	}
	prec = set->precision - addrlen + 2;
	if	(prec < 0)
		prec = 0;
	if (prec != 0 && set->width <= set->precision)
		set->total_len = set->total_len + prec;
	ptr_print(set, addr, addrlen, prec);
}
