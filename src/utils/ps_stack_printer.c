/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:31:30 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/24 19:42:19 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_stack_printer(t_stack *stack, char *name)
{
	int	counter;
	
	counter = stack->length - 1;
	write(1, "\nStack ", 8);
	write(1, name, 1);
	write(1, "\n===================\n", 21);
	while (counter >= 0)
	{
		ps_element_printer(stack, name, counter);
		write(1, "\n", 1);
		counter--;
	}
	write(1, "\n===================\n", 21);
	ft_putstr_fd("Su longitud es de  ", 1);
	ft_putnbr_fd(stack->length, 1);
	write(1, "\n\n", 2);
}