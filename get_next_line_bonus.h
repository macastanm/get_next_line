/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:56:30 by macastan          #+#    #+#             */
/*   Updated: 2022/12/05 14:56:39 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 4096
# endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *rest);
char	*ft_get_line(char *rest);
char	*ft_rest(char *rest);
char	*ft_strchr(const char *str, int c);
char	*ft_joinandfree(char *s1, char *s2);
size_t	ft_strlen(char const *s);
void	*ft_calloc(size_t nitens, size_t size);

#endif
