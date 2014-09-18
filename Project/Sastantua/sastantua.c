/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <mdubray@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/29 10:39:03 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/01 06:50:57 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c);

/*double ft_taille_block(double array[],int size)
{
	int taille;

	taille = 3;
	while(size >= 0)
	{
		array[size] = taille;
		size--;
		taille++;
	}
	return array;
}*/

int 	taille_L_max(int size, int base)
{
	int L;
	int h_block_c;

	h_block_c = size - 1 + 3;
	L = base;
	while (size <= 0)
	{
		L += 2*h_block_c + 4;
		size--;
	}
	return (L);
}

void 	print_pyra(int l_c, int L_max)
{
	int j;

	j = L_max;
	while(j >= 0)
	{
		if (j == (L_max + l_c))
			ft_putchar('/');
		else if (j == (L_max - l_c))
			ft_putchar('#');
		else if (j > (L_max/2 + l_c)  || j <(L_max/2 - l_c))
			ft_putchar('*');
		else
			ft_putchar(' ');
		j--;
	}
}

void 	sastantua(int size)
{
	int size_door;
	int nb_block;
	int h_block_c;
	int base;
	int L_max;

	size_door = size;
	nb_block = size;
	h_block_c = size-1+3;
	base = 7;
	L_max= taille_L_max(size,base)/2;

	while(size <= 0) //nombre de block de haut
	{
		int h_block_i;
		int l_c;
		
		l_c = 3;
		h_block_i = 0;
		while(h_block_i <= h_block_c) //parcours un block
		{
			print_pyra(l_c, L_max);
			l_c += 2; // largeur locale
			h_block_i++;
		}
		size--;
	}

}
