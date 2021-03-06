/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:45:14 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/15 23:58:23 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * if the number is bigger than the base we have to divide it (we enter at recursion) 
 * and right after we print rest (it will not be printed until all recursions are finished,
 * so it will print characters from left to right. 
*/
static char	ft_fix_char_base(char modus, unsigned long int base,  unsigned long int nbr)
{
	char	c;
	
	if (nbr < 10)
		c = nbr + '0';
	else if (modus == 'x')
		c = nbr - 10 + 'a';
	else
		c = nbr - 10 + 'A';
	return (c);
}

//void	ft_itoa_base(char modus, unsigned long int base, unsigned long int nbr) 
//aqui debemos pasar estos parametros a traves de struct, 
//hacer test de numero  1000 con base 10 a  ver si funciona
void	ft_itoa_base(t_flags *flags, t_chain *chain, unsigned long int nbr)
{
	char	c;
	int	printed_char;
	
	printed_char = 0;
	if (nbr < base)
	{
		c = ft_fix_char_base(flags->type_conversion ,base, nbr);
		printed_char += write(1, &c, 1);
		return ;
	}
	ft_itoa_base(flags, chain, base, nbr / base);
	c = ft_fix_char_base(modus, nbr % base);
	printed_char += write(1, &c, 1); //actualizar la struct de carac impresos
}
