/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_fct.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:17:47 by tdutel            #+#    #+#             */
/*   Updated: 2023/07/24 14:21:41 by tdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef STR_FCT_H
# define STR_FCT_H

# include "libft.h"

char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strrchr(char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
