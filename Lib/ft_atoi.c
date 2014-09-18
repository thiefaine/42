/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 19:03:28 by avallete          #+#    #+#             */
/*   Updated: 2014/08/31 19:06:41 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)

{
	int	result;
	int	i;

	i = 0;
	result = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		result = result * 10;
		result = result + (((int)str[i]) - 48);
		i++;
	}
	if (str[0] == '-')
		result = -result;
	return (result);
}
