/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:38:12 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/07 16:44:10 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
//funciona perfcet para cualquier base
static char	ft_choosechar(char modus, unsigned long int nbr)
{
	char	c;

	if (nbr < 10)
		c = nbr + '0';
	else if (modus == 'X') //En octal no entrar en eeste ifsolo en mayuscaula en acso de X : para p y x min, las letras en minus
		c = nbr - 10 + 'A';
	else
		c = nbr - 10 + 'a';
	return (c);
}

void	ft_putnbrpf(unsigned long int base, unsigned long int nbr)
{
	char	c;

	char modus;
	int	caracteres_impresos; // viene en t_io *io, anadir en la declaracion como Helen

	caracteres_impresos = 0;
	// modus tiene que ser = 'x' o X anadir despues en la declaracion;
	modus = 'x';

	if (nbr < base)
	{
		c = ft_choosechar(modus, nbr);
		caracteres_impresos += write(1, &c, 1);
		return ;
	}
	printf("\n cuando nbr es mayor que  base , dividimos, nbr /base :%li y el resto %li \n", nbr / base, nbr % base);
	ft_putnbrpf(base, nbr / base); 
	c = ft_choosechar(modus, nbr % base);
	caracteres_impresos += write(1, &c, 1);
}

int main (void)
{
	unsigned long int	nbr;

	nbr = 16777099;
	ft_putnbrpf(8, nbr);
	printf("\n abajo hex y encima octal \n");
	ft_putnbrpf(16, nbr);
	// printf("\nabajo los resultados reales\n");
	// printf("octal: %lo , x: %lx y X: \n", nbr, nbr);
	return (0);
}