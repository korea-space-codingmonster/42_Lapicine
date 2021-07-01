/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 04:51:55 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 04:52:03 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <stdbool.h>

# include "ft_args_parser.h"

bool	ft_stdin_hexdump(t_options *options);

bool	ft_hexdump(t_options *options, int count);

#endif
