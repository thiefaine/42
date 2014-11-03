/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 03:38:41 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/15 03:58:56 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_tree	*create_element(void *data)
{
	t_tree	*node;
	node = malloc(sizeof(t_tree));
	if(node != NULL)
	{
		node->data = data;
		node->right = NULL;
		node->left = NULL;
	}
	return (node);
}
