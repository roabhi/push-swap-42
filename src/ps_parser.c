/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:47:07 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/17 17:52:01 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_parser(int i, char **params)
{
	int	c;
	(void)params;

	c = 1;
	i--;
	if (i == 0)
		ps_errors("\n Error: No params\n");	
	// ft_putstr_fd("\n\n", 1);
	while (c <= i)
	{
		if (ft_strlen(params[c]) == 0)
			ps_errors("\n Error: ");
		// if (ft_atoi(params[c]) == 0)
		// 	ps_errors("\n Error: Only numbers\n");
		// if (ft_isalpha((int)params[c]))
		// 	ps_errors("Please do not include letters");
		// ps_check_already(params, c, i);		
		// ft_putchar_fd('\n', 1);
		// ft_putchar_fd('\n', 1);
		// ft_putchar_fd('\n', 1);
		c++;
	}
}