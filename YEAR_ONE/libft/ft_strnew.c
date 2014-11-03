/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:14:28 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/03 15:04:21 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (size)
	{
		str = (char *)malloc(size * sizeof(char) + 1);
		if (str)
		{
			str[size + 1] = '\0';
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
