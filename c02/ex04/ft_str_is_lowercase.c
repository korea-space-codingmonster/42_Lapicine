/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 23:53:30 by napark            #+#    #+#             */
/*   Updated: 2020/08/10 14:49:43 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int			ft_str_is_lowercase(char *str)
{
	bool	jud;
	int		i;

	i = 0;
	jud = true;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			jud = false;
			break ;
		}
		if (str[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (jud);
}
