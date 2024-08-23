/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_down.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:36:48 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 01:59:16 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int col_down(int tab[4][4], int position, int entry_number[16])
{
	int max;
	int i;
	int count;

	i = 3;
	max = 0;
	count = 0;
	if (position / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][position % 4] > max)
			{
				max = tab[i][position % 4];
				count ++;
			}
			i --;
		}
		if (entry_number[4  + position % 4] != count)
		{
			return(1);
		}
	}
	return(0);
}