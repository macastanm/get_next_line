/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:50:50 by macastan          #+#    #+#             */
/*   Updated: 2022/11/29 10:59:37 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

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

char	*get_next_line(int fd);
char	*ft_read(int fd, char *rest);
char	*ft_get_line(char *rest);
char	*ft_rest(char *rest);
char	*ft_strchr(const char *str, int c);
char	*ft_joinandfree(char *s1, char *s2);
size_t	ft_strlen(char const *s);
void	*ft_calloc(size_t nitens, size_t size);

#endif
