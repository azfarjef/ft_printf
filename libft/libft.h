/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:23:52 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/08/18 19:17:19 by mahmad-j         ###   ########.fr       */
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
size_t	ft_strlen(char *str);
char	*ft_strnew(size_t size);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strncpy(char *dest, const char *src, size_t n);
void	ft_putstr(char *str);
void	ft_putnchar(char c, int n);
int	ft_nbrlen(long long nbr);





#endif