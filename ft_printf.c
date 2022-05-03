/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:38 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/02 16:07:31 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_flags	*flag_counter;
	t_chain	*chain;
	
	va_start(ap, format);
	flag_counter = ft_initialize_flags(); //tenemos que tener en cuenta si la funcion retorna Null?
	chain = ft_initialize_chain(format, ap);
	ft_parser(flag_counter, chain); //atencion a la defincion. Es posible que tenga que devolver un parametro
	// atencion si hay que hacer algun free
	va_end(ap);
	free(flag_counter);
	free(chain);
	return (chain->char_printed); //aqu'i hay que devolver chain->char_printed
}

// int	main(void)
// {
// 	const char	*format;
// 	int	i;

// 	format = "Felipe";
// 	i = ft_printf(format);
// 	printf("%i\n", i);
// 	//printf("%s, %i\n", chain->format, chain->char_printed);
// 	return (0);
// }
