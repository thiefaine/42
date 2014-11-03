/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 11:09:33 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/01 15:05:10 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

/*void	colle04(int x, int y)
{
	int x_t;
	int y_t;

	x_t = 1;
	y_t = 1;
	while (y_t <= y)
	{
		x_t = 1;
		ft_putchar('\n');
		while (x_t <= x)
		{
			if (((x_t == x && (y_t == 1 || y_t == y)) || (y_t == y && (x_t == 1 || x_t == x))) && x != 1)
			{
				ft_putchar('C');
			}
			else if ((x_t == 1 && y_t == 1) || (x_t == x && y_t == y))
			{
				ft_putchar('A');
			}
			else if ((x_t == x && (y_t == 1 || y_t == y)) || (y_t == y && (x_t == 1 || x_t == x)))
			{
			}
			else if (x_t == 1 || y_t == 1 || x_t == x || y_t == y)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			x_t++;
		}
		y_t++;
	}
	ft_putchar('\n');
}
*/

void	detection(int x,int y, int xm, int ym, int pos)
{
	int ret;
	int chaine[9];

	ret = 2;
	chaine[0] = 'A';
	chaine[1] = 'B';
	chaine[2] = 'C';
	chaine[3] = 'B';
	chaine[4] = ' ';
	chaine[5] = 'B';
	chaine[6] = 'C';
	chaine[7] = 'B';
	chaine[8] = 'A';
	if (x == 1)
		ft_putchar(chaine[0+pos]);
	else if (x == xm)
		ft_putchar(chaine[2+pos]);
	else
		ft_putchar(chaine[1+pos]);
}

void	colle04(int x, int y)
{
	int xa;
	int ya;
	int pos;

	xa = 1;
	ya = 1;
	pos = 0;
	while (ya <= y)
	{
		xa = 1;
		ft_putchar('\n');
		while (xa <= x)
		{
			if (ya == 1)
			{
				pos = 0;
				detection(xa,ya,x,y,pos);
			}
			else if (ya == y)
			{
				pos = 6;
				detection(xa,ya,x,y,pos);
			}
			else
			{
				pos = 3;
				detection(xa,ya,x,y,pos);
			}
			xa++;
		}
		ya++;
	}
}
