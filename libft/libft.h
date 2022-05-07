/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:49:19 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/21 11:49:19 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char				*ft_strchr(const char *s, int c);
char				*ft_itoa(int n);
size_t				count_cipher(int n); //esta funcion no esta declarada como static y tampoco esta en su archivo propio , atencion
int					ft_strlen(const char *str);
char				*ft_strdup(const char *s);


#endif
