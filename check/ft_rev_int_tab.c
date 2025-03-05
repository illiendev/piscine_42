/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeimlin <adeimlin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:17:34 by adeimlin          #+#    #+#             */
/*   Updated: 2025/03/05 19:32:59 by adeimlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	arr[size];
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = *tab;
		i++;
		tab++;
	}
	tab--;
	i = 0;
	while (i < size)
	{
		*tab = arr[i];
		i++;
		tab--;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int a[5] = {1, 2, 3, 4, 5};
// 	ft_rev_int_tab(&a[0], 5);
// 	for (int i=0;i<5;i++)
// 		printf("%d,", a[i]);
// }