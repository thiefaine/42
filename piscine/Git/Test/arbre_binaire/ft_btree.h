/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 03:22:09 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/15 04:01:13 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_tree
{
	void	*data;
	t_tree	*right;
	t_tree	*left;
}					t_tree;

#endif
