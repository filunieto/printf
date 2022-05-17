/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_struct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:51:09 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 10:06:16 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
 * Initialize the structure to start to 
 * work with.
*/
t_chain	*ft_initialize_chain(const char *format, va_list ap)
{
	t_chain	*chain;
	
	chain = (t_chain *)malloc(sizeof(t_chain));
	if (!chain)
		return (NULL);
	chain->format = format;
	chain->char_printed = 0;
	chain->pos = 0;
	va_copy(chain->ap, ap);
	va_end(ap);
	return (chain);
}

void	ft_initialize_flags(t_flags *flag_counter)
{
	flag_counter->minus_left_pad = 0;
	flag_counter->plus = 0;
	flag_counter->space = 0;
	flag_counter->zero_left_pad = 0;
	flag_counter->hash = 0;
	flag_counter->width = 0;
	flag_counter->precisiontf = 0;
	flag_counter->precision = 0;
	flag_counter->lenght = 0;
	flag_counter->base = 10;
}