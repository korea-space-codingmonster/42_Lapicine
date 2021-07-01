/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 18:37:53 by napark            #+#    #+#             */
/*   Updated: 2020/08/12 21:47:57 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		check;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		check = 1;
		while (str[i + j] != '\0' && to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
			{
				check = 0;
				break ;
			}
			j++;
		}
		if (check == 1 && to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
