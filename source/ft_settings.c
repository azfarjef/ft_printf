/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_settings.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 01:47:54 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/08/30 18:42:40 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_settings(t_set *set)
{
	int				num;
	static	t_func	*func_arr[e_len] = {
	[e_char] = ft_out_char,
	[e_string] = ft_out_string,
	[e_pointer] = ft_out_pointer,
	[e_deci] = ft_out_deci,
	[e_udeci] = ft_out_udeci,
	[e_hex] = ft_out_hex};
	// [e_percent] = ft_out_percent};

	set->format++;
	ft_flag(set);
	ft_width(set);
	ft_precision(set);
	num = ft_select_format(set);
	func_arr[num](set);
}