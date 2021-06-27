/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 09:46:12 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/06/27 09:55:47 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_width(t_set *set)
{
	set->width = 0;
	if (*set->format == '*')
	{
		set->width = va_arg(set->arg, int);
		if (set->width < 0)
		{
			set->width = -1 * set->width;
			set->flag[e_minus] =  '1';
		}
		set->format++;
	}
	if (*set->format >= '0' && *set->format <= '9')
		set->width = ft_atoi(set->format);
}