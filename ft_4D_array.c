/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4D_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oghandou <oghandou@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:06:02 by oghandou          #+#    #+#             */
/*   Updated: 2022/09/25 13:40:57 by oghandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_atoi(char *str);
int ft_strlen(char *str);
int check_numbers(int argc, char **argv)
{
	if (argc != 2)
	{
		return(1);
	}
	if (ft_strlen(argv[1]) != 31)
	{
		return(1);
	}
	return(0);
}
int *read_numbers(char *str)
{
	int i;
	int j;
	int *tab;

	if(!(tab = malloc(sizeof(int) * 16)))
	{
		return (0);
	}
	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j++] = ft_atoi(str + i);
		}
	}
	return (tab);
}