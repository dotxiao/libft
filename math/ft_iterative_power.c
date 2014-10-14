/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 17:28:21 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/08 17:40:15 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int ret;

	if (power > 0)
	{
		ret = 1;
		i = 0;
		while (i < power)
		{
			ret *= nb;
			i++;
		}
	}
	else
		return (0);
	return (ret);
}
