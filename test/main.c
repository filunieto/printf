/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:02:04 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/16 21:21:22 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	main(void)
{
	const char	*format;
	int	i;
	//char	c = 'a';
	int	number = 9;
	//unsigned int n_problem = 4294967295;
	//char	*cadena = "Felipe";

	format = "\nProbamos unsig: %p\n";
	i = ft_printf(format, &number );
	printf("numero de caract %i\n\n", i);
	printf("Funcion printf abajo\n");
	i = printf(format, &number);
	printf("numero de caract %i\n", i);
	//printf("%s, %i\n", chain->format, chain->char_printed);
	//system("leaks a.out");
	return (0);
}
