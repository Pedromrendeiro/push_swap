/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaustin <pfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:38:02 by pfaustin          #+#    #+#             */
/*   Updated: 2024/06/03 10:28:45 by pfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;

	dl = 0;
	sl = 0;
	while (dst[dl] && dl < size)
		dl++;
	while (src[sl] && (dl + sl + 1) < size)
	{
		dst[dl + sl] = src[sl];
		sl++;
	}
	if (dl < size)
		dst[dl + sl] = '\0';
	return (dl + ft_strlen(src));
}
