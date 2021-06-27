/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 09:40:19 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/06/27 09:44:39 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_flag(t_set *set)
{
	set->flag[e_minus] = '0';
	set->flag[e_zero] = '0';
	while (*set->format == '-' || *set->format == '0')
	{
		if (*set->format == '-')
			set->flag[e_minus] = '1';
		if (*set->format == '0')
			set->flag[e_zero] = '1';
		set->format++;
	}
}
