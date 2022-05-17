/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:30:43 by fnieves-          #+#    #+#             */
/*   Updated: 2022/05/17 13:20:34 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (result);
}
