/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:45:02 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 09:48:06 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
 * We start running through the string. if it does not find '%; it prints normal 
 * and increments the counter. Otherwise, it starts parsing.
 * if it finds a FLAG1 in pos + 1, keep with parsing till he finds FLAGS3
 *
*/
void	ft_parser(t_flags *flags, t_chain *chain)
{
	while (chain->format[chain->pos])
	{
		if (chain->format[chain->pos] != '%')
			chain->char_printed += write(1, &chain->format[chain->pos], 1); //si no encuentra % , imprime nomral 
		else if (ft_strchr(FLAGS_GLOBAL, chain->format[chain->pos + 1])) //impliciatmente ha encontrado % y analizamos la siguiente posicion si peretence a las varaibles generales
		{
			chain->pos++; //como la posicion posterior a % , pertenecia a las variables , avanzamos la posicion y estamos en una flag del grupo general
			while (ft_strchr(FLAGS_PRECISION, chain->format[chain->pos]))
			{
				//crear funcion que actaulaiza la estructura de flags , incrementado los flags solo para flags simples
				ft_update_flag_label(flags, chain);
				chain->pos++;
			}
			if (ft_strchr(FLAGS_CONVERSION, chain->format[chain->pos]))
			{
				//crear funcion que imprimira de una manera especial segun encuentre cspdiouxX%% (tendra como inputs el contador de flags y )
				ft_print_flag(flags, chain);
			}
			//volvemos a inicializar a 0 el contador de flags y buscamos el siguiente % o seguimos imprimiendo caracteres normal
			//free(flags); Añadî esta parte en su momento pero daba bastantes problemas
			ft_initialize_flags(flags); // Cambié la funcion a void de output
		}
		chain->pos++;
	}
}
