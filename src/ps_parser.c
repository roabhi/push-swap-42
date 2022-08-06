/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:47:07 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/06 14:41:41 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// int	already_in()
// {
// 	return (0);
// }

void	ps_parser(int i, char **params)
{
	int	c;
	(void)params;

	c = 1;
	i--;
	if (i == 0)
		ps_errors("");
	// ft_putnbr_fd(i, 1);
	// ft_putstr_fd("\n\n", 1);
	// while (c <= i)
	// {
	// 	ft_putnbr_fd(ft_atoi(params[c]), 1);
	// 	if (ft_isalpha((int)params[c]))
	// 		ps_errors("Please do not include letters");
	// 	ft_putchar_fd('\n', 1);
	// 	ft_putchar_fd('\n', 1);
	// 	ft_putchar_fd('\n', 1);
	// 	c++;
	// }
}