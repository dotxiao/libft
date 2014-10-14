/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 14:48:58 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 17:29:15 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		scan(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
			if (scan(&str[i], to_find))
				return (&str[i]);
		i++;
	}
	return (NULL);
}
