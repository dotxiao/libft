/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/06 20:42:29 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/06 21:51:15 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	mod;

	mod = 1;
	while (mod == 1)
	{
		mod = 0;	
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				swap(&tab[i], &tab[i + 1]);
				mod = 1;
			}
		}
	}
}
