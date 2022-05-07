/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:23:31 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/06 17:07:25 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_int(t_flags *flags, t_chain *chain)
{
	char	*str;
	int		number;
	size_t	lengh_number;
	
	flags->str_to_print = "1"; //lo pongo para que se calle el warning. actualizar despues
	number = va_arg(chain->ap, int);
	lengh_number = count_cipher(number);
	str = ft_itoa(number);
	chain->char_printed += write(1, str, lengh_number);
	free(str);
}
