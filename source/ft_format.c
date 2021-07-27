/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 08:22:04 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/07/14 08:50:42 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_select_format(t_set *set)
{
	int	num;

	num = 0;
	if(*set->format == 'c')
		num = e_char;
	else if (*set->format == 's')
		num = e_string;
	else if (*set->format == 'p')
		num = e_pointer;
	return (num);
}
