/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:38 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/06 13:08:58 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_flags	*flag_counter;
	t_chain	*chain;
	int	total_char_printed;
	
	va_start(ap, format);
	//tenemos que tener en cuenta si la funcion retorna Null?
	flag_counter = ft_initialize_flags();
	chain = ft_initialize_chain(format, ap);
	ft_parser(flag_counter, chain);
	va_end(ap);
	//tengo que hacer esto porque har'e un free. otra manera?
	total_char_printed = chain->char_printed;
	free(flag_counter);
	free(chain);
	return (total_char_printed);
}

int	main(void)
{
	const char	*format;
	int	i;
	char	c = 'Y';
	int	number = -45;
	char	*cadena = "Felipe";

	format = "\nFelipe: %c %% y second time %c y el numero %i y la cadena %s\n";
	i = ft_printf(format, c, c, number, cadena);
	printf("numero de caract %i\n\n", i);
	printf("Funcion printf abajo\n");
	i = printf(format, c, c, number, cadena);
	printf("numero de caract %i\n", i);
	//printf("%s, %i\n", chain->format, chain->char_printed);
	return (0);
}
