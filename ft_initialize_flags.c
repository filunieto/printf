/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_flags.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:51:09 by fnieves-          #+#    #+#             */
/*   Updated: 2022/04/30 19:28:38 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
 * Initialize the flags to 0 to start to 
 * work with.
*/
void	ft_initialize_flags(t_flags *tab)
{
	tab->len = 0;
	tab->minus = 0;
	tab->plus = 0;
	tab->space = 0;
	tab->zero = 0;
	tab->hash = 0;
	tab->width = 0;
	tab->precisiontf = 0;
	tab->precision = 0;
	tab->lenght = 0;
}