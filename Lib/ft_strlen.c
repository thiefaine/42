/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <mdubray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 15:51:38 by mdubray           #+#    #+#             */
/*   Updated: 2014/08/31 18:30:40 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}