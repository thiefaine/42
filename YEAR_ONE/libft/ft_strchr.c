/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:06:19 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/04 19:41:41 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (ret)
	{
		if (c == '\0')
			return ("\0");
		while (s[i] != '\0')
		{
			if (s[i] == (char)c)
			{
				printf("ok\n");
				while (s[i] != '\0')
				{
					ret[i] = s[i];
					i++;
				}
				printf("%d\n", (int)sizeof(ret));
				ret[i] = '\0';
				return (ret);
			}
			i++;
		}
	}
	return (NULL);
}
