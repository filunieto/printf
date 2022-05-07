/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:23:31 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/06 12:54:17 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_str(t_flags *flags, t_chain *chain)
{
	char	*str;
	int		leng_str;
	
	flags->str_to_print = "1"; //lo pongo para que se caye el warning. actualizar despues

	str = ft_strdup((const char *)va_arg(chain->ap, char *)); //in va_arg no ponemos el int como parametro 
	leng_str = ft_strlen((const char *)str);
	chain->char_printed += write(1, str, leng_str);
	free(str);// tego que hacer algun free
}

