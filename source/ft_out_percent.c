/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 22:15:07 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/08/30 22:29:40 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	percent_width(t_set *set)
{
	if (set->width > 1)
	{
		set->total_len = set->total_len + set->width - 1;
		set->width++;
		if (set->flag[e_zero] == '1' && set->flag[e_minus] != '1')
			while (--set->width > 1)
				ft_putchar('0');
		else
			while (--set->width > 1)
				ft_putchar(' ');
	}
}

void	ft_out_percent(t_set *set)
{
	if (set->flag[e_minus] == '1')
		ft_putchar('%');
	percent_width(set);
	if (set->flag[e_minus] != '1')
		ft_putchar('%');
	set->total_len++;
	set->format++;
}
