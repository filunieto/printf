/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:30:43 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 13:10:38 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_power(int base, size_t exp)
{
	size_t	i;
	int	result;

	i = 0;
	result = 1;
	while (i++ < exp)
	{
		result = result * base;
	}
	//printf("resultado de %i elevado a %zu = %i \n", base, exp, result);
	return (result);
}

int main(void)
{
	//ft_power(2,0);
	printf("resultado de suma caracteres %i\n", '2' - '0');
	return (0);
}
