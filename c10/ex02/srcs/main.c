/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 04:25:16 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 04:25:27 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_tail.h"
#include "ft_args_parser.h"

int		main(int argc, char **argv)
{
	if (!parse_args(argv, argc))
		return (1);
	return (0);
}
