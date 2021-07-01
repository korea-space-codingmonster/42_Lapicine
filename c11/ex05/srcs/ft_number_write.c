/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_write.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 06:03:28 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 06:03:38 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

void	ft_number_write(int number)
{
	if (number == -2147483648)
	{
		ft_number_write(number / 10);
		ft_char_write('8');
	}
	else if (number < 0)
	{
		ft_char_write('-');
		ft_number_write(-number);
	}
	else
	{
		if (number > 9)
			ft_number_write(number / 10);
		ft_char_write('0' + number % 10);
	}
}
