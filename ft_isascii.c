/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:20:35 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/21 15:43:40 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isascii(320));
	printf("%d\n", ft_isascii(37));
	printf("%d\n", ft_isascii(25));
	printf("%d\n", ft_isascii(256));
}
