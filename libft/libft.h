/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:23:52 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/06/28 08:05:52 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	*ft_calloc(size_t n, size_t len);
void	ft_bzero(void *s, size_t n);
void	ft_putchar(char c);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);



#endif