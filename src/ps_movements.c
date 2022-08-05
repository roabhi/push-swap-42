/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:13:55 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/05 19:51:38 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_pb(t_stack stack_a, t_stack stack_b)
{
	int counter;
    
    counter = 0;
	while (counter < stack_a.length)
	{
		ft_putnbr_fd(stack_a.array[counter]->value, 1);
		write(1, "/", 1);
		counter++;
	}

    ft_putstr_fd("El stack b tiene una longitud de ", 1);
	ft_putnbr_fd(stack_b.length, 1);
	write(1, "\n", 1);
}