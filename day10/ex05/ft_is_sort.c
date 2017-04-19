/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgnat <kgnat@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 22:54:17 by kgnat             #+#    #+#             */
/*   Updated: 2017/04/17 23:44:34 by kgnat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			break ;
	}
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			break ;
	}
	if (i == length - 1)
		return (1);
	return (0);
}
