/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 05:09:11 by napark            #+#    #+#             */
/*   Updated: 2020/08/18 05:09:29 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int n)
{
	int i;
	int temp;

	if (n < 2)
		return (0);
	i = 2;
	temp = n / 2;
	while (i <= temp && i <= 65536)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (is_prime(nb) == 0)
		nb++;
	return (nb);
}
