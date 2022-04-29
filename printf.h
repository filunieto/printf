/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:32 by fnieves-          #+#    #+#             */
/*   Updated: 2022/04/29 20:11:24 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef __PRINTF_H
# define __PRINTF_H


# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_struct
{
	char	*fmt;
	
	int		nprinted;
	
	int		i;
	int		len;
	
	int		minus;
	int		plus;
	int		space;
	int		zero;
	int		hash; //#
	
	int		width;  //0-9
	int		precisiontf;// . 
	int		precision; //.#
	int		lenght; // LL HH H L
}t_struct;

typedef struct s_print
{
	va_list	args;
	int		wdt; //anchura
	int		prc; //precision
	int		zero;
	int		pnt;
	int		dash;
	int		tl;
	int		sign;
	int		is_zero;
	int		perc;
	int		sp;
}t_print;

int	ft_printf(const char *str, ...);

#endif