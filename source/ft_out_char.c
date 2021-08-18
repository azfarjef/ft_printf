/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 08:16:56 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/08/18 19:12:05 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	char_width(t_set *set)
{
	if (set->width > 1)
	{
		set->total_len = set->total_len + (set->width - 1);
		set->width++;
		if (set->flag[e_zero] == '1' && set->flag[e_minus] != '1')
			while (--set->width > 1)
				ft_putchar('0');
		else
			while (--set->width > 1)
				ft_putchar(' ');
	}
}

void	ft_out_char(t_set *set)
{
	char	c;

	c = va_arg(set->arg, int);
	if (set->flag[e_minus] == '1')
		ft_putchar(c);
	char_width(set);
	if (set->flag[e_minus] != '1')
		ft_putchar(c);
	set->total_len++;
	set->format++;
}
