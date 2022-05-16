/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:23:31 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/16 00:10:32 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_str(t_flags *flags, t_chain *chain)
{
	char	*str;
	int		leng_str;
	
	flags->base = 10; //esto no vale para nada. Si no necesito el input flag borrar
	str = ft_strdup((const char *)va_arg(chain->ap, char *)); //in va_arg no ponemos el int como parametro 
	leng_str = ft_strlen((const char *)str);
	chain->char_printed += write(1, str, leng_str);
	free(str);// tego que hacer algun free porque he llamado a malloc. 
	//Echar un vistazo al tutorial de Kani para no tener que recurrir a malloc(ya que hay que estar muy atento para saber cuando se necesita)
}

