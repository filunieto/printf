/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:23:31 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/16 00:10:49 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_int(t_flags *flags, t_chain *chain)
{
	char	*str;
	int		number;
	size_t	lengh_number;
	
	flags->base = 10; //no vale paqra nada. Si no necesito el input flag , borrar
	number = va_arg(chain->ap, int);
	lengh_number = count_cipher(number);
	str = ft_itoa(number);
	chain->char_printed += write(1, str, lengh_number);
	free(str);
}
