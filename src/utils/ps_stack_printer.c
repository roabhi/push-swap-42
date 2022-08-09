/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:31:30 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/09 16:33:40 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_stack_printer(t_stack *stack, char *name)
{
	int	counter;
	
	counter = 0;
	ft_putstr_fd("Stack ", 1);
	ft_putstr_fd(name, 1);
	write(1, "\n===================", 20);
	ft_putstr_fd("\n", 1);
	while (counter < stack->length)
	{
		ps_element_printer(stack, name, counter);
		// ft_putnbr_fd(stack->array[counter]->value, 1);
		write(1, "\n", 1);
		counter++;
	}
	write(1, "\n===================\n", 21);
	ft_putstr_fd("Su longitud es de  ", 1);
	ft_putnbr_fd(stack->length, 1);
	write(1, "\n\n", 2);
}