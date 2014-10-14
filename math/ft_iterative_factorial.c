/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/07 09:04:24 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/07 10:50:41 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int ret;

	ret = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		ret = ret * nb;
		nb--;
	}
	return (ret);
}
