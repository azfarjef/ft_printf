/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 08:44:42 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/07/11 18:52:05 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	str_width(t_set *set, int strlen)
{
	if (set->width > strlen)
	{
		set->total_len = set->total_len + (set->width - strlen);
		while(set->width > strlen)
		{
			ft_putchar(' ');
			set->width--;
		}
	}
}

static void	str_print(t_set *set, char *str, int strlen)
{
	if (set->flag[e_minus] == '1' && set->point != 1)
		ft_putstr(str);
	str_width(set, strlen);
	if (set->flag[e_minus] != '1' && set->point != 1)
		ft_putstr(str);
	set->total_len = set->total_len + strlen;
	set->format++;
	free(str);
}

void	ft_out_string(t_set *set)
{
	char	*tmp;
	char	*str;
	int		strlen;

	tmp = va_arg(set->arg, char *);
	if (tmp == NULL)
		tmp = "(null)";
	if (set->precision == 0)
	{
		str = ft_strnew(ft_strlen(tmp));
		ft_strcpy(str, tmp);
	}
	else
	{
		if (ft_strcmp(tmp, "(null)") == 0)
			set->precision = 0;
		str = ft_strnew(set->precision);
		ft_strncpy(str, tmp, set->precision);
	}
	if (set->precision == 1)
		strlen = 0;
	else
		strlen = ft_strlen(str);
	str_print(set, str, strlen);
}