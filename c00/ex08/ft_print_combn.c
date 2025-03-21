/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeimlin <adeimlin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:30:44 by adeimlin          #+#    #+#             */
/*   Updated: 2025/03/05 18:50:21 by adeimlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(int n, char *str, int flag)
{
	char	num;

	n--;
	while (n >= 0)
	{
		num = str[n] + '0';
		n--;
		write(1, &num, 1);
	}
	if (flag)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	comb[10];
	int		i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
		comb[i++] = n - i;
	comb[0] -= 1;
	i = 0;
	while (!((comb[n - 1] == 10 - n) && (comb[0] == 9)))
	{
		while (comb[i] == (9 - i) && i < n)
			i++;
		comb[i]++;
		while (i > 0)
			comb[i-- - 1] = comb[i] + 1;
		ft_print_str(n, &comb[0], !((comb[n - 1] == 10 - n) && (comb[0] == 9)));
	}
}

int main ()
{
	int n;
	ft_print_combn(3);
}
