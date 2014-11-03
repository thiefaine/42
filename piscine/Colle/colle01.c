/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 19:08:47 by mdubray           #+#    #+#             */
/*   Updated: 2014/08/31 20:39:58 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);

void	colle01(int x,int y)
{
	int i;
	int j;

	j = 1;
	i = 1;
	while (i <= x)
	{
		j = 1;
		ft_putchar('\n');
		while(j <= y)
		{
			if ((i == 1 && (j == 1 || j == y)) || (j == 1 && (i == 1 || i == x)))
				ft_putchar('o');
			else if (i == x && j == y)
				ft_putchar('o');
			else if (j == 1 || j == y)
				ft_putchar('|');
			else if (i == 1 || i == x)
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
	}

}
