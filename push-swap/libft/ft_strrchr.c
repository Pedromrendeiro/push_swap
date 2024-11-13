/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:59:11 by pfaustin          #+#    #+#             */
/*   Updated: 2024/05/20 10:45:00 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (ptr = (char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (ptr = (char *)s + i);
		i--;
	}
	return (NULL);
}
