/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:26:48 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 13:37:24 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_numbers(int argc, char **argv);
int *read_numbers( char *str);
int solve_skyscrapers(int tab[4][4], int entry_number[16], int position);
void skyscrapers_solution(int tab[4][4]);
void ft_putstr(char *str);
int main(int argc, char **argv)
{
	int tab[4][4] = {
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
	};
	int *entry_number;
	if (check_numbers(argc, argv) == 1)
	{
		return(0);
	}
	entry_number = read_numbers(argv[1]);
	if (solve_skyscrapers(tab, entry_number,0) == 1)
	{
		skyscrapers_solution(tab);
	}
	else
	{
		ft_putstr("Error\n");
	}
	return(0);
}