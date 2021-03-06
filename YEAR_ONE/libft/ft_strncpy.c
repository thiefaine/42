/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:31:26 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/04 14:17:27 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int		i;

	i = 0;
	if (dst && src)
	{
		while (i <= n && dst[i] != '\0' && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
