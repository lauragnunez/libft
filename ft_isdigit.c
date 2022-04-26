/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:12:29 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/19 16:42:05 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}

int	main(void)
{
	int	c;

	c = 0;
	printf("%d\n", ft_isdigit(c));
	c = 3;
	printf("%d\n", ft_isdigit(c));
	c = 'B';
	printf("%d\n", ft_isdigit(c));
	c = 11;
	printf("%d\n", ft_isdigit(c));
}
