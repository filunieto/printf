/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:26:32 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/16 21:25:14 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

static char	ft_fix_char_base(char modus, unsigned long int nbr)
{
	char	c;
	//atencion si habria que a;adir los modus o y u o no es necesario
	if (nbr < 10)
		c = nbr + '0';
	else if (modus == 'X')
		c = nbr - 10 + 'A';
	else
		c = nbr - 10 + 'a';
	return (c);
}
//void	ft_itoa_base(char modus, unsigned long int base, unsigned long int nbr) 
//aqui debemos pasar estos parametros a traves de struct, 
//hacer test de numero  1000 con base 10 a  ver si funciona
void	ft_print_hex(t_flags *flags, t_chain *chain, unsigned long int nbr)
{
	char	c;

	if (nbr < flags->base)
	{
		c = ft_fix_char_base(flags->type_conversion , nbr);
		chain->char_printed += write(1, &c, 1);
		return ;
	}
	ft_print_hex(flags, chain, nbr / flags->base);
	c = ft_fix_char_base(flags->type_conversion, nbr % flags->base);
	chain->char_printed += write(1, &c, 1); //actualizar la struct de carac impresos
}

//no me actualiza los caracteres impresos. Corrregir 16/05/22
//Unsigned parace que fgunciona , octogonal , no