/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:42:35 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/19 16:44:35 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= 0 && c <= 9))
		return (1);
	return (0);
}

int	main(void)
{
	char	c;
	int		a;

	c = 'a';
	printf("%d\n", ft_isalnum(c));
	c = 'B';
	printf("%d\n", ft_isalnum(c));
	c = ':';
	printf("%d\n", ft_isalnum(c));
	a = 3;
	printf("%d\n", ft_isalnum(a));
}
