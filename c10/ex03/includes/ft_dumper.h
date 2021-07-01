/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dumper.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 04:49:37 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 04:49:46 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DUMPER_H
# define FT_DUMPER_H

# include "ft_args_parser.h"

# define UINT unsigned int

void	ft_dump(t_options *options, char *content, UINT length, UINT lines);

#endif
