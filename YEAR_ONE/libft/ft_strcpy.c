/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:27:21 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/03 18:38:36 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	if (src && dst)
	{
		while (src[i] != '\0' || dst[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (NULL);
}