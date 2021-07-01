/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 04:16:56 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 04:17:04 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	echo(void)
{
	char	c;
	int	n;

	while (1)
	{
		while ((n = read(0, &c, 1)) > 0)
			write(1, &c, 1);
		if (n < 0)
			exit(-1);
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[100];
	int		n;
	int		i;

	if (argc < 2)
		echo();
	else
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == 0)
				return (0);
			while ((n = read(fd, buf, 100)) > 0)
				write(1, buf, n);
			if (n < 0)
				return (-1);
			close(fd);
			i++;
		}
	}
	return (0);
}
