/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:21:28 by lagarcia          #+#    #+#             */
/*   Updated: 2022/05/05 13:34:21 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if ((count + size) < count)
		return (0);
	str = malloc(count * size);
	if (str == 0)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}
