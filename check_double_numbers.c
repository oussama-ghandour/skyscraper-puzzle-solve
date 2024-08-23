/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:58:35 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 01:01:58 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_double_numbers(int tab[4][4], int position, int nbr)
{
	int i;

	i  = -1;
	while (++i < position / 4)
	{
		if (tab[i][position % 4] == nbr)
		{
			return(1);
		}
	}
	while (++i < position % 4)
	{
		if (tab[position / 4][i] == nbr)
		{
			return(1);
		}
	}
	return(0);
}