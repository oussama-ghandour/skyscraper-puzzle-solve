/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:26:20 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 03:16:24 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int col_up(int tab[4][4], int position, int entry_number[16])
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (position / 4 == 3)
	{
		while ( i < 4)
		{
			if (tab[i][position % 4] > max)
			{
				max = tab[i][position % 4];
				count ++;
			}
			i ++;
		}
		if (entry_number[position % 4] != count)
		{
			return (1);
		}
		
	}
	return (0);
}