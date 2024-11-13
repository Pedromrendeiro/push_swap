/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:03:26 by pfaustin          #+#    #+#             */
/*   Updated: 2024/04/30 18:16:04 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	a;
	size_t	b;

	str = (char *)malloc(
			sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	a = 0;
	b = 0;
	while (s1[a])
	{
		str[b++] = s1[a];
		a++;
	}
	a = 0;
	while (s2[a])
	{
		str[b++] = s2[a];
		a++;
	}
	str[b] = 0;
	return (str);
}
