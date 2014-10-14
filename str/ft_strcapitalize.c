/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 22:01:37 by adoussau          #+#    #+#             */
/*   Updated: 2014/07/09 23:03:54 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int		is_upercase(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int		is_lowercase(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

void	strlow(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_upercase(str[i]))
			str[i] -= 'a' - 'A';
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	strlow(str);
	if (is_lowercase(str[0]))
		str[0] -= ('a' - 'A');
	i = 1;
	while (str[i])
	{
		if (!is_number(str[i - 1]) && !is_upercase(str[i - 1]) &&
				!is_lowercase(str[i - 1]))
			if (is_lowercase(str[i]))
				str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
