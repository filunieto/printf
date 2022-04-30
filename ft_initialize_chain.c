/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_chain.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:51:09 by fnieves-          #+#    #+#             */
/*   Updated: 2022/04/30 19:24:55 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
 * Initialize the structure to start to 
 * work with.
*/

void	ft_initialize_chain(t_chain *chain, const char *format, va_list ap)
{
	chain->format = format;
	chain->char_printed = 0;
	chain->pos = 0;
	va_copy(chain->ap, ap);
	va_end(ap);
}