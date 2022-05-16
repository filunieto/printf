/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:23:31 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/16 19:31:10 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(t_flags *flags, t_chain *chain)
{
	char	*str;
	int		number;
	size_t	lengh_number;
	
	number = va_arg(chain->ap, int);
	lengh_number = count_cipher(number);
	if (flags->plus)
		chain->char_printed += write(1, "+", 1);
	str = ft_itoa(number);
	if (str == NULL) //atencion aqui. Importante o estaremos funcionando con  algo que no existe
		return ;
	chain->char_printed += write(1, str, lengh_number);
	free(str);
}
