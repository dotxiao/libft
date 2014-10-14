/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 12:53:12 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/04 23:10:20 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_nb(int i, int j)
{
	ft_putchar(i / 10 + '0');
	ft_putchar(i % 10 + '0');
	ft_putchar(' ');
	ft_putchar(j / 10 + '0');
	ft_putchar(j % 10 + '0');
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (1)
	{
		if (i < j)
		{
			print_nb(i, j);
			if (i == 98 && j == 99)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
		}
		j++;
		if (j > 99)
		{
			j = 0;
			i++;
		}
	}
}
