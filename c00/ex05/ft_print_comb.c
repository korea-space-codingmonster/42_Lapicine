/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 17:29:23 by napark            #+#    #+#             */
/*   Updated: 2020/08/06 01:44:50 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char number[3];

	number[0] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, &number, 3);
				if (!(number[0] == '7' && number[1] == '8' && number[2] == '9'))
					write(1, ", ", 2);
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
