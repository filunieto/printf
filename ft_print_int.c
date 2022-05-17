/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:23:31 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 20:06:32 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	ft_print_space_zeros(size_t lengh_number,t_flags *flags, t_chain *chain)
{
	int	i;

	i = 0;
	while (i < flags->width - (int)lengh_number - flags->plus * 1)
	{
		if (flags->space)
		{
			chain->char_printed += write (1, " ", 1);
		}
		else
		{
			chain->char_printed += write (1, "0", 1);
		}
		i++;
	}
}

void	ft_print_int(t_flags *flags, t_chain *chain)
{
	char	*str;
	int		number;
	size_t	lengh_number;
	
	number = va_arg(chain->ap, int);
	lengh_number = count_cipher(number); //atencion donde incuimos la funcion en la libreria, hacer un archivo en c solo para ella
	if (flags->space || flags->plus)
	{
		ft_print_space_zeros(lengh_number, flags, chain);
	}
	if (flags->plus)
		chain->char_printed += write(1, "+", 1); //hay que tener en cuenta este  caracter
	if (flags->zero_left_pad)
	{
		ft_print_space_zeros(lengh_number, flags, chain);
	}
	str = ft_itoa(number);
	if (str == NULL) //atencion aqui. Importante o estaremos funcionando con  algo que no existe
		return ;
	chain->char_printed += write(1, str, lengh_number);
	free(str);
}
