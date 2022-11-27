/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:47:07 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/27 19:33:25 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ps_only_num(char str)
{
	if (str != '-' && str != '+')
	{
		if (str < '0' || str > '9')
			return (0);
	}
	return (1);
}

void	ps_parser(int i, char **params)
{
	int	c;
	int	l;

	c = 1;
	i--;
	if (i == 0)
		ps_errors("");
	while (c <= i)
	{
		if (ft_strlen(params[c]) == 0)
			ps_errors("Error\n");
		l = 0;
		while (params[c][l] != '\0')
		{
			if (!ps_only_num(params[c][l]))
				ps_errors("Error\n");
			l++;
		}			
		if (ps_atoi(params[c]) >= (long long int)2147483648
			|| ps_atoi(params[c]) <= (long long int)-2147483649)
			ps_errors("Error\n");
		c++;
	}
}
