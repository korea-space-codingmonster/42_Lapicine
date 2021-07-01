/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:34:10 by napark            #+#    #+#             */
/*   Updated: 2020/08/18 04:54:16 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char c)
{
	if (c == '\t'
			|| c == '\n'
			|| c == '\v'
			|| c == '\f'
			|| c == '\r'
			|| c == ' ')
		return (1);
	if (c == '-')
		return (-1);
	if (c == '+')
		return (-2);
	if (c >= '0' && c <= '9')
		return (2);
	return (0);
}

int	ft_atoi(char *str)
{
	int index;
	int count;
	int result;

	index = 0;
	while (check_char(str[index]) == 1)
		index++;
	count = 0;
	while (check_char(str[index]) < 0)
	{
		if (check_char(str[index]) == -1)
			count++;
		index++;
	}
	if (str[index] < '0' || str[index] > '9')
		return (0);
	result = str[index++] - '0';
	while (check_char(str[index]) == 2)
		result = result * 10 + str[index++] - '0';
	if (count % 2 == 1)
		result *= -1;
	return (result);
}
