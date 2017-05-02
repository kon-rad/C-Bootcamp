/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asun <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 21:21:37 by asun              #+#    #+#             */
/*   Updated: 2016/07/30 21:21:38 by asun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "rush.h"
#include "index.h"




t_list	*rush00(int x, int y)
{
	int		length;
	t_list	*list;

	list = 0;
	if (x <= 0 || y <= 0)
		return (0);
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_list_push_front(&list, ft_putline('o', 'o', '-', x));
		else if (length == 1)
			ft_list_push_front(&list, ft_putline('o', 'o', '-', x));
		else
			ft_list_push_front(&list, ft_putline('|', '|', ' ', x));
		length -= 1;
	}
	return (list);
}

t_list	*rush01(int x, int y)
{
	int		length;
	t_list	*list;

	list = 0;
	if (x <= 0 || y <= 0)
		return (0);
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_list_push_front(&list, ft_putline('/', '\\', '*', x));
		else if (length == 1)
			ft_list_push_front(&list, ft_putline('\\', '/', '*', x));
		else
			ft_list_push_front(&list, ft_putline('*', '*', ' ', x));
		length -= 1;
	}
	return (list);
}

t_list	*rush02(int x, int y)
{
	int		length;
	t_list	*list;

	list = 0;
	if (x <= 0 || y <= 0)
		return (0);
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_list_push_front(&list, ft_putline('A', 'A', 'B', x));
		else if (length == 1)
			ft_list_push_front(&list, ft_putline('C', 'C', 'B', x));
		else
			ft_list_push_front(&list, ft_putline('B', 'B', ' ', x));
		length -= 1;
	}
	return (list);
}


t_list	*rush03(int x, int y)
{
	int		length;
	t_list	*list;

	list = 0;
	if (x <= 0 || y <= 0)
		return (0);
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_list_push_front(&list, ft_putline('A', 'C', 'B', x));
		else if (length == 1)
			ft_list_push_front(&list, ft_putline('A', 'C', 'B', x));
		else
			ft_list_push_front(&list, ft_putline('B', 'B', ' ', x));
		length -= 1;
	}
	return (list);
}

t_list	*rush04(int x, int y)
{
	int		length;
	t_list	*list;

	list = 0;
	if (x <= 0 || y <= 0)
		return (0);
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_list_push_front(&list, ft_putline('A', 'C', 'B', x));
		else if (length == 1)
			ft_list_push_front(&list, ft_putline('C', 'A', 'B', x));
		else
			ft_list_push_front(&list, ft_putline('B', 'B', ' ', x));
		length -= 1;
	}
	return (list);
}

t_list	*ft_read_stdi(int *row, int *column)
{
	char	buffer;
	char	*c;
	t_list	*list;
	t_list	*tmp;

	list = 0;
	while (read(0, &buffer, 1) != 0)
	{
		(*row)++;
		tmp = 0;
		*column = 0;
		while (buffer != '\n')
		{
			c = (char*)malloc(sizeof(char));
			*c = buffer;
			ft_list_push_front(&tmp, c);
			read(0, &buffer, 1);
			(*column)++;
		}
		ft_list_push_front(&list, tmp);
	}
	return (list);
}

int		main(void)
{
	int		row;
	int		column;
	t_list	*list;

	row = 0;
	column = 0;
	list = ft_read_stdi(&row, &column);
	if (!search(list, row, column, g_index))
		ft_putstr("aucune\n");
	return (0);
}
