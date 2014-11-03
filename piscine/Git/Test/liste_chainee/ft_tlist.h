/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tlist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 04:02:09 by mdubray           #+#    #+#             */
/*   Updated: 2014/09/15 05:01:33 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TLIST_H
# define FT_TLIST_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

#endif
