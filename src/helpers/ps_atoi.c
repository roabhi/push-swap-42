/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:40:54 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/24 18:47:11 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long long int	ps_atoi(const char *str)
{
	int						c;
	unsigned long long int	res;
	int						sign;

	c = 0;
	res = 0;
	sign = 1;
	while (str[c] == 32 || (str[c] >= 9 && str[c] <= 13))
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign = -1;
		c++;
	}
	while (str[c] != '\0')
	{
		if (str[c] >= '0' && str[c] <= '9')
			res = (res * 10) + (str[c] - '0');
		else
			ps_errors("Error\n");
		c++;
	}
	return ((long long int)(res * sign));
}