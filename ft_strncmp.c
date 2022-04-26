/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:09:10 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/20 16:10:02 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_strcmp("a", "a"));
	printf("\n");
	printf("%d", ft_strcmp("a", "b"));
	printf("\n");
	printf("%d", ft_strcmp("a", "c"));
	printf("\n");
	printf("%d", ft_strcmp("z", "d"));
	printf("\n");
	printf("%d", ft_strcmp("abc", "abe"));
	printf("\n");
	printf("%d", ft_strcmp("apples", "apple"));
}
