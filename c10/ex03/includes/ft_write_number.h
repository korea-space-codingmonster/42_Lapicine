/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_number.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 04:52:58 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 04:53:07 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WRITE_NUMBER_H
# define FT_WRITE_NUMBER_H

# define MAX_BUFFER_SIZE 14

void	ft_buffer_number(int number, int radix, int buffer[], int index);

void	ft_write_number(unsigned int number, int radix, int char_count);

void	ft_write_safe_char(char *c);

#endif
