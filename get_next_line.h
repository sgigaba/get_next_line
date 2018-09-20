/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:34:09 by sgigaba           #+#    #+#             */
/*   Updated: 2018/07/01 11:20:44 by sgigaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 590

# include <stdio.h>
# include <ctype.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		get_next_line(const int fd, char **line);

#endif
