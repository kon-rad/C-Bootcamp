/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgnat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 16:49:17 by kgnat             #+#    #+#             */
/*   Updated: 2017/04/09 17:01:44 by kgnat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_char(int x_i, int y_i, int x, int y)
{
	if (((y_i == 1) && (x_i == 1)) || ((y_i == y) && (x_i == x)))
		ft_putchar('A');
	else if (((y_i == 1) && (x_i == x)) || ((y_i == y) && (x_i == 1)))
		ft_putchar('C');
	else if (((y_i == 1) || (y_i == y)) && ((x_i != 1) || (x_i != x)))
		ft_putchar('B');
	else if (((y_i != 1) || (y_i != y)) && ((x_i == 1) || (x_i == x)))
		ft_putchar('B');
	else if (((x_i != 1) || (x_i != x)) && ((y_i != 1) || (y_i != y)))
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	x_i;
	int y_i;

	if (x > 0 && y > 0)
	{
		y_i = 1;
		while (y_i <= y)
		{
			x_i = 1;
			while (x_i <= x)
			{
				print_char(x_i, y_i, x, y);
				x_i++;
			}
			ft_putchar('\n');
			y_i++;
		}
	}
}
