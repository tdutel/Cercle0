/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:57:42 by tdutel            #+#    #+#             */
/*   Updated: 2023/07/24 14:22:11 by tdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/str_fct.h"

char	*ft_strdup(const char *src)
{
	char		*new;
	size_t		i;
	size_t		size;

	size = 0;
	while (src[size])
		size++;
	new = malloc(sizeof(*new) * size + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
