/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_fct.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:12:47 by tdutel            #+#    #+#             */
/*   Updated: 2023/07/24 15:15:31 by tdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_FCT_H
# define MEM_FCT_H

# include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *s, int c, size_t n);

#endif
