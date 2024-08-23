/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_row_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:02:47 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 01:56:27 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int col_up(int tab[4][4], int position, int entry_number[16]);
int col_down(int tab[4][4], int position, int entry_number[16]);
int row_left(int tab[4][4], int position, int entry_number[16]);
int row_right(int tab[4][4], int position, int entry_number[16]);

int case_row_col(int tab[4][4], int position, int entry_number[16])
{
	if (row_left(tab,position, entry_number) == 1)
	{
		return(1);
	}
	if(row_right(tab, position, entry_number) == 1)
	{
		return(1);
	}
	if(col_down(tab, position, entry_number) == 1)
	{
		return(1);
	}
	if(col_up(tab,position,entry_number) == 1)
	{
		return(1);
	}
	return(0);
}