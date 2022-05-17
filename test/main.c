/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:02:04 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 19:44:18 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	main(void)
{
	const char	*format;
	int	i;
	//char	c = 'a';
	unsigned int	number = 324;
	//unsigned int n_problem = 4294967295;
	//char	*cadena = "Felipe";

	format = "%#012x";
	i = ft_printf(format, &number);
	printf("\nnumero de caract ft %i\n", i);
	printf("----Funcion printf abajo----\n");
	i = printf(format, &number);
	printf("\nnumero de caract: %i", i);
	printf("\n----end----\n");
	//printf("%s, %i\n", chain->format, chain->char_printed);
	//system("leaks a.out");
	return (0);
}
