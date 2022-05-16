/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:33:33 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/16 12:33:53 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
 * Actualizamos los flags segun tipo de conversor
*/

void	ft_update_flag_label(t_flags *flags, t_chain *chain)
{
	if (chain->format[chain->pos] == '#')
	{
		flags->hash = 1;
	}
	else if (chain->format[chain->pos == '+'])
	{
		flags->plus = 1;
	}
}

void	ft_update_flag_conversor(t_flags *flags, t_chain *chain)
{
	if (flags->type_conversion == 'X' || flags->type_conversion == 'x' 
		|| flags->type_conversion == 'p')
	{
		if (flags->hash && flags->type_conversion == 'X')
			chain->char_printed += write(1, "0X", 2);
		else if (flags->hash && flags->type_conversion == 'x')
			chain->char_printed += write(1, "0x", 2);
		flags->base = 16;
	}
	if (flags->type_conversion == 'o')
	{
		if (flags->hash)
			chain->char_printed += write(1, "0", 1);
		flags->base = 8;
	}
}