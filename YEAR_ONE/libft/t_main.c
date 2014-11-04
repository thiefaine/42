/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:41:47 by mdubray           #+#    #+#             */
/*   Updated: 2014/11/04 20:48:33 by mdubray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	//verification de strlen
	char	s1[] = "abcdefghijklmnopqrstuvwxyz";
	char	s2[10] = "";
	int		len_s1 = ft_strlen(s1);
	int		len_s2 = ft_strlen(s2);
	printf("longueur de s1 : %d, longueur de s2 : %d\n", len_s1, len_s2);

	//verification de strdup
	char	s3[] = ",.<>/:'qwerty123";
	printf("duplication s3 : %s, duplication s2 : %s\n", ft_strdup(s3), ft_strdup(s2));
	printf("attendu dup s3 : %s, dup s2 : %s \n", strdup(s3), strdup(s2));

	//verification strcpy
	char	s4[] = "abcdefghijklmnopqrstuvwxyz";
	char	s6[] = "test";
	printf("copy de s6 dans s4 : %s\n", ft_strcpy(s4, s6));
	char	s5[] = "abcdefghijjkmnopqrstuvxyz";
	char	s7[] = "test";
	printf("copy de s5 dans s7 : %s\n", ft_strcpy(s7, s5));

	//verification strncpy
	char	s8[] = "abcdefghijklmnopqrstuvwxyz";
	char	s9[] = "test";
	printf("n copy de s9 dans s8 : %s\n", ft_strncpy(s8, s9, 2));
	char	s10[] = "abcdefghijjkmnopqrstuvxyz";
	char	s11[] = "test";
	printf("n copy de s10 dans s11 : %s\n", ft_strncpy(s11, s10, 1));
	char	s12[] = "abcdefghijklmnopqrstuvwxyz";
	char	s13[] = "test";
	printf("n copy de s13 dans s12 : %s\n", ft_strncpy(s12, s13, 7));
	char	s14[] = "abcdefghijjkmnopqrstuvxyz";
	char	s15[] = "test";
	printf("n copy de s14 dans s15 : %s\n", ft_strncpy(s15, s14, 10));

	//verification strcat
	char	cat_s1[9] = "abcd";
	char	*cat_s2 = "ok";
	printf("concatenation de s2 dans s1 : %s\n", ft_strcat(cat_s1, cat_s2));
	printf("attendu : %s\n", strcat(cat_s1, cat_s2));

	//verification strncat
	char	ncat_s1[10] = "abcd";
	char	*ncat_s2 = "ok";
	printf("n concat de s1 dans s2 : %s\n", ft_strncat(ncat_s1, ncat_s2, 5));
	printf("attendu : %s\n", strncat(ncat_s1, ncat_s2, 5));

	//verification strlcat
	char		lcat_s1[15] = "abcd";
	char		*lcat_s2 = "ok";
	printf("l concat de s1 dans s2 : %d\n", (int)ft_strlcat(lcat_s1, lcat_s2, 2));
	char 		lcat_s3[10] = "abcd";
	char		*lcat_s4 = "ok";
	printf("attendu : %d\n", (int)strlcat(lcat_s3, lcat_s4, 0));

	//verification strchr
	const char	*c_s1 = "abcdefghijklmnopqrstuvwxyz";
	char		c = 't';
	printf("recherche de chr : %s\n", ft_strchr(c_s1, c));
	printf("attendu : %s\n", strchr(c_s1, c));

	//verification strstr

	//verification tolower
	
	//verification toupper
	
	//verification isprint
	
	//verification isascii
	
	//verification isalnum
	
	//verification isdigit
	
	//verification isalpha
	
	//verification atoi
	
	return (0);
}
