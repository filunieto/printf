/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:20:26 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/02 19:33:01 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
 * Identificamos el modo de conversion y lo almacenamos en la estructura
*/
void	ft_print_flag(t_flags *flags, t_chain *chain)
{
	flags->type_conversion = chain->format[chain->pos];
	//crear funcion que ira actualizando los parametros segun el modo de conversion
}
