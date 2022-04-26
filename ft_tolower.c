/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:38:07 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/20 15:39:00 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

int	main(void)
{
	char	letra;

	printf("Ingrese una letra: ");
	scanf("%c", &letra);
	letra = ft_tolower(letra);
	printf("La letra en minúscula es: %c\n", letra);
	return (0);
}
