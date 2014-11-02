/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 09:48:46 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/10 09:48:47 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] < ' ')
			return (0);
		i++;
	}
	return (1);
}