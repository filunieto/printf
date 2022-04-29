/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:49:38 by fnieves-          #+#    #+#             */
/*   Updated: 2022/04/29 21:04:05 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_eval_format(t_print *tab, char const *format, int i);

static t_print	*ft_initialize_tab(t_print *tab)
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->dash = 0;
	tab->tl = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

int	ft_printf(const char *format, ...)
{
	t_print	*tab;
	int	i;
	int ret;
	
	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialize_tab(tab);  //puedo poner esto?:	tab = ft_initialize_tab(tab);
	
	va_start(tab->args, format);
	i = 0;
	ret = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i = ft_eval_format(tab, format, i + 1);
		}
		else
		{
			ret = ret + write(1, &format[i], 1);
		}
	}
	va_end(tab->args);
	ret	= ret + tab->tl;
	free(tab);
	return (ret);
}

int	main (void)
{
	const char	*str;

	str = "mi mamam me mima";
	ft_printf(str);
	return (0);
}