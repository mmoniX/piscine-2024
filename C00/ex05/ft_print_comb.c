/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:19:19 by mmonika           #+#    #+#             */
/*   Updated: 2024/04/30 01:37:56 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i < '8')
	{
		j = i + 1;
		while (j < '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (!(i == '7' && j == '8' && k == '9'))
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
