/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asun <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 10:50:04 by asun              #+#    #+#             */
/*   Updated: 2016/07/27 10:50:05 by asun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "rush.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	if (!(tmp = (t_list*)malloc(sizeof(t_list))))
		return (0);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = ft_create_elem(data);
	tmp->next = *begin_list;
	*begin_list = tmp;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


t_list	*ft_putline(char start, char end, char fill, int length)
{
	t_list	*list;
	char	*a;
	char	*b;
	char	*c;

	a = (char*)malloc(sizeof(char));
	b = (char*)malloc(sizeof(char));
	c = (char*)malloc(sizeof(char));
	*a = start;
	*b = end;
	*c = fill;
	list = 0;
	ft_list_push_front(&list, a);
	while (length > 2)
	{
		ft_list_push_front(&list, c);
		length -= 1;
	}
	if (length == 2)
		ft_list_push_front(&list, b);
	return (list);
}


void	print_positive(long nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	print_positive(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	print_positive(n);
}


void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}
