/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:55:41 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 13:56:35 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}
