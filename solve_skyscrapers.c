/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_skyscrapers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:15:52 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 13:33:34 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_double_numbers(int tab[4][4], int position, int nbr);
int case_row_col(int tab[4][4], int position, int entry_number[16]);
int solve_skyscrapers(int tab[4][4], int entry_number[16], int position)
{
	int size;
	if (position == 16)
	{
		return(1);
	}
	size = 0;
	while(++size <= 4)
	{
		if (check_double_numbers(tab, position, size) == 0)
		{
			tab[position / 4][position % 4] = size;
			if (case_row_col(tab, position, entry_number) == 0)
			{
				if (solve_skyscrapers(tab, entry_number, position + 1) == 1)
				{
					return(1);
				}
				
			}
			else
				{
					tab[position / 4][position % 4] = 0;
				}
		}
	}
	return(0);
}