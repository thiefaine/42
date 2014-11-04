/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:05:56 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/04 18:32:40 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, char *s2, size_t n)
{
	int					i;
	unsigned int		j;
	unsigned int		ret;
	int					taille;

	i = ft_strlen(s1);
	taille = (int)sizeof(s1);
	j = 0;
	if (s1 && s2)
	{
		if (ft_strlen(s1) + ft_strlen(s2) <= taille)
		{
			while (s2[j] != '\0' && j < n)
			{
				s1[i] = s2[j];
				i++;
				j++;
			}
			s1[i] = '\0';
			ret = ft_strlen(s1);
			return (ret);
		}
		return (0);
	}
	return (0);
}
