/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimagalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:25:44 by rimagalh          #+#    #+#             */
/*   Updated: 2024/11/13 17:28:54 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char				*get_next_line(int fd);
static char			*ft_clean_chars(char *read_chars);
static char			*ft_read(char *read_chars, int fd);
static char			*ft_create_line(char *read_chars);
char				*ft_strchr(char *str, int c);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
static size_t		ft_strlen(const char *str);
char				*ft_substr(char const *s, unsigned int start, size_t len);

#endif
