/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:40:17 by ael-amin          #+#    #+#             */
/*   Updated: 2022/12/31 09:48:10 by ael-amin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<fcntl.h>
# include<unistd.h>
# include<limits.h>

char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memcpy(void *dest, const void *src, size_t n);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
#endif
