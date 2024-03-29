/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:05:17 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/08/31 07:01:27 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_set
{
	const char	*format;
	va_list		arg;
	int			width;
	int			precision;
	char		flag[2];
	int			total_len;
	int			point;
}				t_set;

enum			e_func
{
	e_char,
	e_string,
	e_pointer,
	e_deci,
	e_udeci,
	e_hex,
	e_percent,
	e_len
};

enum			e_flag
{
	e_minus,
	e_zero
};

typedef void	t_func(t_set *set);

int		ft_printf(const char *format, ...);
void	ft_settings(t_set *set);

int		ft_select_format(t_set *set);
void	ft_flag(t_set *set);
void	ft_width(t_set *set);
void	ft_precision(t_set *set);

void	ft_out_char(t_set *set);
void	ft_out_string(t_set *set);
void	ft_out_pointer(t_set *set);
void	ft_out_deci(t_set *set);
void	ft_out_udeci(t_set *set);
void	ft_out_hex(t_set *set);
void	ft_out_percent(t_set *set);

#endif