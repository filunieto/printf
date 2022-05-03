/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:32 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/03 13:02:56 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __PRINTF_H
# define __PRINTF_H

#include<stdio.h> //recuerda borrarla. solo para testear funciones con printf

# include <stdarg.h>
# include "../../libft proyecto/libft/libft.h"

#define FLAGS_GLOBAL "cspdiouxXf%#-+ .*0123456789hLljz"
#define FLAGS_CONVERSION "cspdiouxXf%"
#define FLAGS_PRECISION "#-+ .*0123456789hLljz"


typedef struct s_flags
{	
	int		i; //para que?
	int		len; //para que?
	
	char	type_conversion;
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


int		ft_printf(const char *str, ...);
t_flags	*ft_initialize_flags(void);
t_chain	*ft_initialize_chain(const char *format, va_list ap);
void	ft_parser(t_flags *tab, t_chain *chain);


// typedef struct s_print  //esta estructura la vamos  descartar
// {
// 	va_list	args;
// 	int		wdt; //anchura
// 	int		prc; //precision
// 	int		zero;
// 	int		pnt;
// 	int		dash;
// 	int		tl;
// 	int		sign;
// 	int		is_zero;
// 	int		perc;
// 	int		sp;
// }t_print;

#endif