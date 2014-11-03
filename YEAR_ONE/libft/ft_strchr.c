/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:06:19 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/03 20:05:23 by mdubray          ###   ########.fr       */
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
			if (s[i] == c)
			{
				while(s[i] != '\0')
				{
					ret[i] = s[i];
					i++;
				}
				ret[i] = '\0';
				return (ret);
			}
			i++;
		}
	}
	return  (NULL);
}

int		main(void)
{
	const char *s1 = "bon okay c'est le test";
	char c = 't';
	printf("%s", ft_strchr(s1, c));
	return (0);
}
