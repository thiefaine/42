/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 20:18:29 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/11 17:29:06 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int j;
	int ret;

	j = 0;
	ret = 0;
	while (s1[j] != '\0' || s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			ret = s1[j] - s2[j];
			return (ret);
		}
		j++;
	}
	return (0);
}
