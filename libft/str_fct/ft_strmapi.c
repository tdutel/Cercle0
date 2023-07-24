/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:06:36 by tdutel            #+#    #+#             */
/*   Updated: 2023/07/24 14:22:34 by tdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/str_fct.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*new;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	new = ft_strdup(s);
	if (!new)
		return (NULL);
	while (new[i])
	{
		new[i] = (*f)(i, new[i]);
		i++;
	}
	return (new);
}
