/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 03:37:30 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/15 03:58:52 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

int		main(void)
{
	t_tree	*pt_debut;
	void	*data;
	char	abc = 'q';
	data = &abc;
	printf("%c", data);
	pt_debut = create_element(data);
	printf("%c", pt_debut->data);
	return (0);
}
