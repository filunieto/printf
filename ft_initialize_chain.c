/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_chain.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:51:09 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/02 15:22:09 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/*
 * Initialize the structure to start to 
 * work with.
*/

t_chain	*ft_initialize_chain(const char *format, va_list ap)
{
	t_chain	*chain;
	
	chain = (t_chain *)malloc(sizeof(t_chain));
	if (!chain)
		return (NULL);
	chain->format = format;
	chain->char_printed = 0;
	chain->pos = 0;
	va_copy(chain->ap, ap);
	va_end(ap);
	return (chain);
}

// int	main(void)
// {
// 	va_list	ap;
// 	t_chain	*chain;
// 	const char	*format;
	
// 	format = "Felipe";
// 	chain = ft_initialize_chain(format, ap);
// 	printf("%s, %i\n", chain->format, chain->char_printed);
// 	return (0);
// }