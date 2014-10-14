/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 13:02:49 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/25 11:40:26 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 +'0');
	}
}

int	main(void)
{
	int	i;

	i = -20;
	while (i < 20)
	{
		ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
