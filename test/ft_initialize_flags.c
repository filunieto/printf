/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_flags.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:51:09 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/02 15:05:57 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
2 maneras de realizar la funcion
*/
t_flags	*ft_initialize_flags1(void)
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
	flag_counter->width = 2;
	flag_counter->precisiontf = 0;
	flag_counter->precision = 0;
	flag_counter->lenght = 0;
	return (flag_counter); //recuerda hacer free en la siguiente funcion una vez acabado el programa
}

void	ft_initialize_flags2(t_flags *flag_counter)
{

	flag_counter->len = 0;
	flag_counter->minus = 0;
	flag_counter->plus = 2;
	flag_counter->space = 0;
	flag_counter->zero = 0;
	flag_counter->hash = 4;
	flag_counter->width = 2;
	flag_counter->precisiontf = 0;
	flag_counter->precision = 0;
	flag_counter->lenght = 0;
}

int	main(void)
{
	t_flags	*flag_counter1;
	t_flags	flag_counter2;
	
	
	flag_counter1 = ft_initialize_flags1();
	ft_initialize_flags2(&flag_counter2);
	
	printf("%i, %i\n", flag_counter1->len, flag_counter1->width);
	printf("%i, %i\n", flag_counter2.hash, flag_counter2.width);
	free(flag_counter1);
	return (0);
}