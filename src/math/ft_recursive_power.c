/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 17:44:01 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 10:15:07 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int ret;

	if (nb || power)
	{
		if (power < 0)
			return (0);
		else if (power > 0)
			ret = nb * ft_recursive_power(nb, power - 1);
		else
			return (1);
		return (ret);
	}
	else
		return (0);
}
