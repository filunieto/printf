/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:38:12 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/03 12:19:54 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	base_8(int	base_10)
{
	int	numero_8;
	int	resto;

	resto = 0;
	numero_8 = 0;
	while (base_10 > 8)
	{
		resto = base_10 % 8;
		numero_8 = numero_8 * 10 + resto; //vamos pasando la cantidad a las unidades
		base_10 = base_10 / 8;
	}
	// condicion cuando es menor que 8. Guardamos el cociente en el ultimo numero
	return (numero_8);
}

int	main(void)
{
	int	base_10;
	//char	*result;

	base_10 = 28;
	printf("resultado en octal %i\n", base_8(base_10));
	return (0);
}