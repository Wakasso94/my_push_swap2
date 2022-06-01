/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s < imaman-s@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:01:34 by imaman-s          #+#    #+#             */
/*   Updated: 2022/05/29 15:01:35 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	get_current_line_size(char *saved_line)
{
	size_t	i;

	i = 0;
	while (saved_line[i] && saved_line[i] != '\n')
	{
		i++;
	}
	if (saved_line[i] == '\n')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (c == '\0')
		return ((char *)str + i);
	return (0);
}

char	*free_memmory(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
	return (NULL);
}
