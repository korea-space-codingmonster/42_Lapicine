/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 00:42:17 by napark            #+#    #+#             */
/*   Updated: 2020/08/10 19:34:22 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int			ft_str_is_uppercase(char *str)
{
	bool	valid;
	int		i;

	i = 0;
	valid = true;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			valid = false;
			break ;
		}
		if (str[i] == '\0')
		{
			valid = true;
			break ;
		}
		i++;
	}
	return (valid);
}
