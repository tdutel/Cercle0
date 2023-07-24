/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:17:23 by tdutel            #+#    #+#             */
/*   Updated: 2023/07/24 14:19:32 by tdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_FCT_H
# define PRINT_FCT_H

# include "libft.h"

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
