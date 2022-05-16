/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:33:20 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/16 16:39:50 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(t_flags *flags, t_chain *chain)
{
	char	print;
	
	if (flags->type_conversion == '%')
		print = '%';
	else
		print = (char)va_arg(chain->ap, int);
	chain->char_printed += write(1, &print, 1);
}
