/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 22:46:52 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/06/27 22:59:21 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_precision(t_set *set)
{
	set->precision = 0;
	set->point = 0;
	if (*set->format == '.')
	{
		set->point = 1;
		set->format++;
		if (*set->format == '*')
		{
			set->precision = va_arg(set->arg, int);
			if(set->precision < 0)
			{
				set->precision = 0;
				set->point = 0;
			}
			set->format++;
		}
		if (*set->format >= '0' && *set->format <= '9')
			set->precision = ft_atoi(set->format);
		while (*set->format >= '0' && *set->format <= '9')
			set->format++;
		if (set->precision > 0)
			set->point = 2;
	}
}
