/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_out.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 04:43:57 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 04:44:05 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_OUT_H
# define FT_TAIL_OUT_H

void	tail_by_lines(int fd);

void	tail_by_byte_count(int fd, unsigned int byte_to_read);

#endif
