/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:32 by fnieves-          #+#    #+#             */
/*   Updated: 2022/04/30 19:44:10 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __PRINTF_H
# define __PRINTF_H


# include <stdarg.h>
# include "../../libft proyecto/libft/libft.h"

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


int		ft_printf(const char *str, ...);
void	ft_initialize_flags(t_flags *tab);
void	ft_initialize_chain(t_chain *chain, const char *format, va_list ap);
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