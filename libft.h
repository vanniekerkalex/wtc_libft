/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:56:57 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/22 13:17:14 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int 		ft_isascii(int c);
int 		ft_isdigit(int c);
int         ft_isspace(int c);

int 		ft_islower(int c);
int 		ft_isupper(int c);
int         ft_isalpha(int c);

int         ft_isalnum(int c);
int         ft_isprint(int c);
int			ft_toupper(int c);
int         ft_tolower(int c);

void 		ft_putchar(char c);
void 		ft_putstr(char *str);

char 		*ft_strcpy(char *dst, const char *src);
size_t		ft_strlen(const char *s);
char		*ft_strncpy(char *dst, const char *src, size_t len);

char		*strdup(const char *s1);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strchr(const char *s, int c);


#endif
