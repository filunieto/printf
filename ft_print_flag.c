/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:20:26 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/16 16:39:52 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
 * Identificamos el modo de conversion y lo almacenamos en la estructura
*/
void	ft_print_flag(t_flags *flags, t_chain *chain)
{
	flags->type_conversion = chain->format[chain->pos];
	 //hemos anadido el caracter de conversion
	ft_update_flag_conversor(flags, chain);
	//crear funcion que ira , ft_update_flag(flags);,  actualizando los parametros segun el modo de conversion
	//ft_update_flag(flags);
	//add 'u' modus
	if	(flags->type_conversion == 'c' || flags->type_conversion == '%')
		ft_print_char(flags, chain);
	else if (flags->type_conversion == 'i' || flags->type_conversion == 'd')
		ft_print_int(flags, chain);
	else if (flags->type_conversion == 's')
	{
		ft_print_str(flags, chain);
	}
	else if (flags->type_conversion == 'x' || flags->type_conversion == 'u' ||
		flags->type_conversion == 'X' || flags->type_conversion == 'o')
	{
		ft_print_hex(flags, chain, (unsigned long int) va_arg (chain->ap, unsigned int)); //repasar el casteo de cada dato aqui y en la siguiente linea
	}
	else if (flags->type_conversion == 'p')
	{
		ft_print_hex(flags, chain, va_arg (chain->ap, unsigned long int));
	}
}
