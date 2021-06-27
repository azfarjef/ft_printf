/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:04:18 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/06/27 23:06:09 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	t_set	*set;

	set = (t_set *)ft_calloc(1, sizeof(t_set));
	if (!set)
		return (-1);
	va_start(set->arg, format);
	set->format = format;
	while (*set->format)
	{
		while (*set->format && *set->format != '%')
		{
			ft_putchar(*set->format);
			set->format++;
			set->total_len++;
		}
		if (*set->format && *set->format == '%')
			ft_settings(set);
	}
	va_end(set->arg);
	len = set->total_len;
	free(set);
	return (len);
}
