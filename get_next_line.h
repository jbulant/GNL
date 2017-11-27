/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 22:17:08 by jbulant           #+#    #+#             */
/*   Updated: 2017/11/27 00:34:30 by jbulant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

# define BUFF_SIZE 128
# define LF '\n'

typedef struct		s_fd_lst
{
	int				fd;
	char			*line;
	struct s_fd_lst	*next;
}					t_fd_lst;
int					get_next_line(const int fd, char **line);

#endif
