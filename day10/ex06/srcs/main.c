/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgnat <kgnat@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 09:23:51 by kgnat             #+#    #+#             */
/*   Updated: 2017/04/18 17:26:47 by kgnat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	init_fn(t_fn *fn)
{
	fn[0].op = '+';
	fn[0].f = &add;
	fn[1].op = '-';
	fn[1].f = &sub;
	fn[2].op = '*';
	fn[2].f = &mul;
	fn[3].op = '/';
	fn[3].f = &dvi;
	fn[4].op = '%';
	fn[4].f = &mod;
}

int		main(int argc, char **argv)
{
	int		i;
	int		flag;
	t_fn	fn[5];

	flag = 0;
	if (argc == 4)
	{
		init_fn(fn);
		i = 0;
		while (i < 5)
		{
			if (argv[2][0] == fn[i].op)
			{
				fn[i].f(ft_atoi(argv[1]), ft_atoi(argv[3]));
				flag = 1;
			}
			i++;
		}
	}
	if (!flag)
		ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
