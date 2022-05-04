/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:20:26 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/04 11:21:57 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
 * Identificamos el modo de conversion y lo almacenamos en la estructura
*/
void	ft_print_flag(t_flags *flags, t_chain *chain)
{
	flags->type_conversion = chain->format[chain->pos]; //hemos anadido el caracter de conversion
	//crear funcion que ira , ft_update_flag(flags);,  actualizando los parametros segun el modo de conversion
	//ft_update_flag(flags);
	if	(flags->type_conversion == 'c' || flags->type_conversion == '%')
		ft_print_char(flags, chain);
	else
	{
		write(1, "hasta aqui hemos llegado" ,23);
	}
}
