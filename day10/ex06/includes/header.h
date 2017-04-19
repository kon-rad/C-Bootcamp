/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgnat <kgnat@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 13:31:34 by kgnat             #+#    #+#             */
/*   Updated: 2017/04/18 19:49:13 by kgnat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

typedef	struct	s_fn
{
	char		op;
	void		(*f)(int, int);
}				t_fn;

void			add(int a, int b);
void			sub(int a, int b);
void			mul(int a, int b);
void			dvi(int a, int b);
void			mod(int a, int b);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);

#endif
