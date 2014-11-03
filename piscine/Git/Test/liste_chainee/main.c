/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 04:05:45 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/15 05:01:31 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tlist.h"

t_list  *ft_create_element(void *data)
{
	t_list  *node;
	node = malloc(sizeof(t_list *));
	if (node != NULL)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

int		main(void)
{
	t_list	*begin;
	begin = NULL;
	char	*abc;
	void	*data;

	abc = "test";
	data = &abc;
	begin = ft_create_element(data);
	printf("%s", *((char *)begin->data));
	return (0);
}
