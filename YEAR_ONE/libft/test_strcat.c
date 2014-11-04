/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:19:19 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/04 20:48:38 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int		main(void)
{
/*	char	s1[10] = "abcdef";
	char	s2[7] = "dfg";

	printf ("%d\n", (int)strlcat(s2, s1, 2));
	printf("%s\n", s1);
	printf("%s\n", s2);
*/
	int	q = 126;

	printf("%d", isprint(q));

	return (0);
}
