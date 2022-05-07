/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:45:14 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/07 18:08:48 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
char	ft_fix_char_base(char modus, unsigned long int nbr)
{
	char	c;
	
	if (nbr < 10)
		c = nbr + '0';
	else if (modus == 'X') //este caso y el siguiene se usan para valores mayores que 10 y  menores que base (para hexadecimal x/X)
		c = nbr - 10 + 'A';
	else
		c = nbr - 10 + 'a';
	return (c);
}

/*
 * si el numero es mayor que la base hay que dividirlo (entramos recursion) y justo despues imprimimos resto (no se imprimira hasta que 
  * acaben todas las recursiones, por lo que imprimira caracteres de izq a derecha
 * 
*/
void	ft_itoa_base(char modus, unsigned long int base, unsigned long int nbr)
{
	char	c;
	int	printed_char;
	
	printed_char = 0;
	if (nbr < base) //si el numero es menor que la base se puede representar direcatmente
	{
		c = ft_fix_char_base(modus, nbr);
		printed_char += write(1, &c, 1);
		return ;
	}
	ft_itoa_base(modus, base, nbr / base);
	c = ft_fix_char_base(modus, nbr % base);
	printed_char += write(1, &c, 1);
}
