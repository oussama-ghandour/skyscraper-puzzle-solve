/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_left.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:42:15 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 12:35:18 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int row_left(int tab[4][4], int position, int entry_number[16])
{
	int i;
	int max;
	int count;

	i = 0;
    max = 0;
	count  = 0;
	if (position % 4 == 3)
	{
		while(i < 4)
		{
			if (tab[position / 4][i] > max )
			{
				max = tab[position / 4][i];
				count ++;
			}
			i ++;
		}
		if (entry_number[8 + position / 4] != count)
		{
			return(1);
		}
	}
	return(0);
}