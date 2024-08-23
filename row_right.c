/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_right.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:32:01 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 03:18:31 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int row_right(int tab[4][4], int position, int entry_number[16])
{
	int i;
	int max = 0;
	int visible;

	i = 4;
	max = 0;
	visible = 0;
	if(position % 4 == 3)
	{
		while(--i >= 0)
		{
			if (tab[position / 4][i] > max)
			{
				max = tab[position / 4][i];
				visible++;
			}
		}
		if (entry_number[12 + position / 4] != visible)
		{
			return(1);
		}
	}
	return(0);
}