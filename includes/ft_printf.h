/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:05:17 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/06/24 09:38:55 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_set
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
	e_int,
	e_u_int,
	e_u_hex_int,
	e_percent,
	e_len
};

typedef void	t_func(t_set *set);

void	ft_settings(t_set *set);


#endif