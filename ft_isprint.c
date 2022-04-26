/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:39:07 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/19 17:42:23 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('*'));
	printf("%d\n", ft_isprint(25));
	printf("%d\n", ft_isprint('['));
}
