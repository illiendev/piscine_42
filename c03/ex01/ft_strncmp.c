/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeimlin <adeimlin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:15:53 by adeimlin          #+#    #+#             */
/*   Updated: 2025/03/08 14:31:24 by adeimlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	flag;

	flag = 0;
	while ((*s1 != 0 || *s2 != 0) && flag == 0 && n > 0)
	{
		if (*s1 == *s2)
			flag = 0;
		else
			flag = *s1 - *s2;
		s1++;
		s2++;
		n--;
	}
	return (flag);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[] = "123456";
    char s2[] = "123459";
    unsigned int n = 6;
    printf ("%d, ", ft_strncmp(s1, s2, n));
    printf ("%d\n", strncmp(s1, s2, n));
}