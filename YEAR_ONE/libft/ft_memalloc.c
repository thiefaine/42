/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:22:31 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/04 11:04:47 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = NULL;
	if (size != 0)
	{
		mem = malloc(size);
		if (mem)
		{
			mem = 0;
			return (mem);
		}
		return (NULL);
	}
	return (NULL);
}
