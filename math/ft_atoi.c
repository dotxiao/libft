/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <antoine@doussaud.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 20:22:10 by adoussau          #+#    #+#             */
/*   Updated: 2014/10/14 19:58:30 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);
int	ft_isspace(int c)

{
	return (c == ' '
			|| c == '\t'
			|| c == '\n'
			|| c == '\v'
			|| c == '\r'
			|| c == '\f');
}

int			ft_atoi(const char *str)
{
	int		ret;
	char	sign;

	sign = 1;
	ret = 0;
	while (ft_isspace(*str))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-' ? -1 : 1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		ret = ret * 10 + sign * (*str - '0');
		str++;
	}
	return (ret);
}
