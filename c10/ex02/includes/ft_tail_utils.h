/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 04:44:31 by napark            #+#    #+#             */
/*   Updated: 2020/08/21 04:44:41 by napark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_UTILS_H
# define FT_TAIL_UTILS_H

int		open_file(char *executable, char *path);

int		close_file(char *executable, char *path, int fd);

void	show_error(char *executable, char *path);

char	*read_full(int fd, unsigned long *total_read);

#endif
