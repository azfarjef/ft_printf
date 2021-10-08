/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:39:23 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/08/31 07:04:03 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t len)
{
	void	*ret;

	ret = malloc(len * n);
	if (!ret)
		return (NULL);
	ft_bzero(ret, len * n);
	return (ret);
}
