/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_flags.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:51:09 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/02 15:12:07 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
 * Initialize the flags to 0 to start to 
 * work with.
*/
t_flags	*ft_initialize_flags(void)
{
	t_flags	*flag_counter;
	
	flag_counter = (t_flags *)malloc(sizeof(t_flags));
	if (!flag_counter)
		return (NULL);
	flag_counter->len = 0;
	flag_counter->minus = 0;
	flag_counter->plus = 0;
	flag_counter->space = 0;
	flag_counter->zero = 0;
	flag_counter->hash = 0;
	flag_counter->width = 0;
	flag_counter->precisiontf = 0;
	flag_counter->precision = 0;
	flag_counter->lenght = 0;
	return (flag_counter);
}

// int	main(void)
// {
// 	t_flags	*flag_counter;
	
// 	//flag_counter = 0; //probar con o sin
// 	flag_counter = ft_initialize_flags();
// 	printf("%i, %i\n", flag_counter->len, flag_counter->width);
// 	free(flag_counter);
// 	return (0);
// }