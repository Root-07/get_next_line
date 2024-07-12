/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:47:26 by ael-amin          #+#    #+#             */
/*   Updated: 2023/01/03 07:02:26 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<fcntl.h>
# include <unistd.h>

char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
void	*ft_memcpy(void *dest, const void *src, size_t n);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
#endif
