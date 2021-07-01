/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:26:34 by napark            #+#    #+#             */
/*   Updated: 2020/08/19 01:45:15 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb == 1)
		return (1);
	i = 0;
	while (i <= nb / 2 && i < 65536)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}