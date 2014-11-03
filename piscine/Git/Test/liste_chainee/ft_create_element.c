/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 04:03:52 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/15 04:17:36 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tlist.h"

t_list	*ft_create_element(void *data)
{
	t_list	*node;
	node = malloc(sizeof(t_list *));
	if (node != NULL)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}
