/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <pfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:49:30 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/03 09:27:08 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	while (*s1)
	{
		if (*s1 == (char)c)
			return ((char *)s1);
		s1++;
	}
	if ((char)c == '\0')
		return ((char *)s1);
	return (NULL);
}
