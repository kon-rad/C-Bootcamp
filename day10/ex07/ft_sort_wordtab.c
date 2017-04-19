/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgnat <kgnat@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:59:49 by kgnat             #+#    #+#             */
/*   Updated: 2017/04/18 22:34:54 by kgnat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap(char **s1_ptr, char **s2_ptr)
{
	char *tmp;

	tmp = *s1_ptr;
	*s1_ptr = *s2_ptr;
	*s2_ptr = tmp;
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int j;

	i = 0;
	while (!i)
	{
		j = 0;
		i = 1;
		while (tab[++i1])
		{
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
			{
				ft_swap(tab + i - 1, tab + i);
				i = 0;
			}
		}
	}
}
