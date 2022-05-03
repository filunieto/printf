/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:32 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/02 18:57:59 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __PRINTF_H
# define __PRINTF_H



# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
#include<stdio.h>


// las librerias de abajo no son necesarias


 //recuerda borrarla. solo para testear funciones con printf


#define FLAGS1 "cspdiouxXfy%#-+ .*0123456789hLljz"
#define FLAGS2 "#-+ .*0123456789hLljz"
#define FLAGS3 "cspdiouxXfy%"

typedef struct s_flags
{	
	int		i; //para que?
	int		len; //para que?
	
	int		minus;
	int		plus;
	int		space;
	int		zero;
	
	int		hash; //#
	
	int		width;  //0-9
	int		precisiontf;// . 
	int		precision; //.#
	int		lenght; // LL HH H L
}t_flags;

typedef struct s_chain
{
	const char	*format;
	int		char_printed; //caracteres impresos
	int		pos;	//posicion de la cadena a analizar
	va_list		ap;
}t_chain;


#endif