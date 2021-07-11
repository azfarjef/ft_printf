/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 08:44:42 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/07/11 10:14:49 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
	
}