/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:17:52 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/20 15:37:31 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (c - 32);
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
	letra = ft_toupper(letra);
	printf("La letra en mayúscula es: %c\n", letra);
	return (0);
}
