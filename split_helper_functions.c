/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_helper_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s < imaman-s@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:57:37 by imaman-s          #+#    #+#             */
/*   Updated: 2022/05/29 14:57:44 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)ptr + i) = x;
		i++;
	}
	return (ptr);
}

void	ft_bzero(void *str, size_t n)
{
	ft_memset (str, '\0', n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*memmory;

	memmory = (void *) malloc(size * count);
	if (memmory == NULL)
		return (NULL);
	ft_bzero(memmory, size * count);
	return (memmory);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*ptr;

	if (!s || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = malloc(sizeof (char) * len + 1);
	if (substr == NULL || s == NULL)
		return (NULL);
	ptr = substr;
	while (s[start] && len)
	{
		*substr = s[start];
		start++;
		len--;
		substr++;
	}
	*substr = '\0';
	return (ptr);
}
