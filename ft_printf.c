/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:38 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 15:20:50 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_flags	flag_counter;
	t_chain	*chain;
	int	total_char_printed;
	
	va_start(ap, format);
	//tenemos que tener en cuenta si la funcion retorna Null?
	ft_initialize_flags(&flag_counter);
	chain = ft_initialize_chain(format, ap);
	ft_parser(&flag_counter, chain);
	va_end(ap);
	total_char_printed = chain->char_printed;
	//free(flag_counter);
	free(chain);
	return (total_char_printed);
}
