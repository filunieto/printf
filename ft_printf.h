/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:32 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 10:07:58 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __FT_PRINTF_H
# define __FT_PRINTF_H

#include <stdio.h> //recuerda borrarla. solo para testear funciones con printf

# include <string.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

//http://www.cplusplus.com/reference/cstdio/printf/  %[$][flags][width][.precision][length modifier]conversion
# define FLAGS_GLOBAL "cspdiuoxX%#-+ .*0123456789hLljz"
# define FLAGS_CONVERSION "cspdiuoxX%"
# define FLAGS_PRECISION "#-+ .*0123456789hLljz"


typedef struct s_flags
{		
	//ok
	char	type_conversion; //cspdiuxX% : ok
	//ok
	int		minus_left_pad; //left justify if it finds a - char
	//ok
	int		plus; //forces to write a + sign (- is by default): just in i and d values
	//ok
	int		space; // Print a space before a positive value not printed with the + flag.
	//ok
	int		zero_left_pad; //Left-pads the number with zeroes (0) instead of spaces when padding is specified : printf ("Preceding with zeros: %010d \n", 1977); --> Preceding with zeros: 0000001977
	//ok
	int		hash; //# with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero. : OK
	
	int		width;  //0-9 // Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. 
			// The value is not truncated even if the result is larger.
	int		precisiontf; // ?? (.) For integer specifiers (d, i, o, u, x, X): precision specifies the minimum number of digits to be written. 
			// If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. 
			// A precision of 0 means that no character is written for the value 0.
			// For s: this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered.
			// If the period is specified without an explicit value for precision, 0 is assumed.
	int		precision; //??  (.#)
	int		lenght; //??  L(long double)  l(long) h(short) z j
	unsigned long int 		base; //base para la conversion 10, 8 o 16, el tipo de datos es para quue concuerde despues con las fun iones en las comparaciones
}t_flags;

typedef struct s_chain
{
	const char	*format;
	int		char_printed; //caracteres impresos
	int		pos;	//posicion de la cadena a analizar
	va_list		ap;
}t_chain;


int		ft_printf(const char *str, ...);
void	ft_initialize_flags(t_flags *flag_counter);
t_chain	*ft_initialize_chain(const char *format, va_list ap);
void	ft_parser(t_flags *tab, t_chain *chain);
void	ft_print_flag(t_flags *flags, t_chain *chain);
void	ft_print_char(t_flags *flags, t_chain *chain);
void	ft_print_int(t_flags *flags, t_chain *chain);
void	ft_print_str(t_flags *flags, t_chain *chain);
void	ft_print_hex(t_flags *flags, t_chain *chain, unsigned long int nbr);
void	ft_update_flag_conversor(t_flags *flags, t_chain *chain);
void	ft_update_flag_label(t_flags *flags, t_chain *chain);
void	zero_left_padding(t_flags *flags, t_chain *chain);




#endif