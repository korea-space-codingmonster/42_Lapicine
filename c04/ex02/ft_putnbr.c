/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 01:09:28 by napark            #+#    #+#             */
/*   Updated: 2020/08/18 04:52:47 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_putnbr(int n)
{
	char temp;

	temp = n % 10 + '0';
	if (n >= 10)
		rev_putnbr(n / 10);
	write(1, &temp, 1);
}

void	ft_putnbr(int nb)
{
	char temp;

	if (nb < 0)
	{
		write(1, "-", 1);
		temp = nb % 10 * (-1) + '0';
		nb /= -10;
		if (nb > 10)
			rev_putnbr(nb);
		write(1, &temp, 1);
	}
	else
		rev_putnbr(nb);
}
