/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:33:33 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 18:52:01 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
 * Actualizamos los flags segun tipo de conversor
*/
void	ft_increment_padding(t_flags *flags, t_chain *chain)
{
	if (flags->space || flags->minus_left_pad || flags->zero_left_pad 
		|| flags->plus)
	{
		chain->pos++; //si tenemos un plus hay que verificar que lo siguiente no sea ni un cero ni un espacio
	}
	if	(chain->format[chain->pos] == '0' || chain->format[chain->pos] == ' ')
	{
		if (chain->format[chain->pos] == '0')
			flags->zero_left_pad = 1;
		else
			flags->space = 1;
		chain->pos++;
	}
	//if esta condicion avanz //recuerda incrementar el chain posicion y devolverlo incrementado	
	while (ft_isdigit(chain->format[chain->pos]))
	{
		//printf("2 el withd /while = %i\n y ultimo caracter recorrdio %c, posicion: %i \n ", flags->width, chain->format[chain->pos], chain->pos);
		flags->width = flags->width * 10 + (chain->format[chain->pos] - '0'); // - '0' para sacar el numero
		chain->pos++;
	}
	chain->pos--;
	printf("3 el withd = %i\n y ultimo caracter recorrdio %c, posicion: %i \n ", flags->width, chain->format[chain->pos], chain->pos);
}

void	ft_update_flag_label(t_flags *flags, t_chain *chain)
{
	//printf("1  entrando en ft_update_flag_label %c: %i \n ", chain->format[chain->pos], chain->pos);
	if (chain->format[chain->pos] == '#')
	{
		flags->hash = 1;
	}
	else if (chain->format[chain->pos] == '+')
	{
		flags->plus = 1;
	}
	else if (chain->format[chain->pos] == '0')
	{
		flags->zero_left_pad = 1;
	}
	else if (chain->format[chain->pos] == '-')
	{
		flags->minus_left_pad = 1;
	}
	else if (chain->format[chain->pos] == ' ')
	{
		flags->space = 1;
	}
	if (!flags->hash)
		ft_increment_padding(flags, chain);
}

void	ft_update_flag_conversor(t_flags *flags, t_chain *chain)
{
	if (flags->type_conversion == 'X' || flags->type_conversion == 'x' 
		|| flags->type_conversion == 'p')
	{
		if (flags->hash && flags->type_conversion == 'X')
			chain->char_printed += write(1, "0X", 2);
		else if ((flags->hash && flags->type_conversion == 'x') || flags->type_conversion == 'p')
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