/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:38 by fnieves-          #+#    #+#             */
/*   Updated: 2022/04/30 19:43:53 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_parser(t_flags *tab, t_chain *chain);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_flags	*tab;
	t_chain	*chain;
	
	va_start(ap, format);
	ft_initialize_flags(tab);
	ft_initialize_chain(chain, format, ap);
	ft_parser(tab, chain);
	va_end(ap);
	return (0); //aqu'i hay que devolver chain->char_printed
}
