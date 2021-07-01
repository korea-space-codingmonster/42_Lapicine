/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 04:42:12 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 04:42:28 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

# include <stdbool.h>

bool	ft_is_in_string(char c, char *str);

bool	ft_is_whitespace(char c);

bool	ft_is_number(char c);

#endif
