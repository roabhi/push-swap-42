/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_min_max_finder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:28:09 by rabril-h          #+#    #+#             */
/*   Updated: 2022/09/20 17:16:14 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ps_max_finder(t_stack *stack)
{
	int counter;
	int max_ndx;

	max_ndx = 0;
	counter = 0;
	while (counter < stack->length -1)
	{
		if (stack->array[counter]->index > stack->array[max_ndx]->index)
			max_ndx = counter;
		counter++;
	}
	// ft_putstr_fd("\nEl numero mayor es ", 1);
	// ft_putnbr_fd(max_ndx, 1);
	return (max_ndx);
}

int	ps_min_finder(t_stack *stack)
{
	int	counter;
	int	min_ndx;
	
	min_ndx = 0;
	counter = 0;
	while (counter < stack->length)
	{
		// ft_putstr_fd("\nEl elemento actual es ", 1);
		// ft_putnbr_fd(stack->array[counter]->value, 1);
		// ft_putstr_fd("\ny su index es ", 1);
		// ft_putnbr_fd(stack->array[counter]->index, 1);
		// write(1, "\n", 1);
		if (stack->array[counter]->index < stack->array[min_ndx]->index)
			min_ndx = counter;
		counter++;
	}
	ft_putstr_fd("\nEl numero menos es ", 1);
	ps_element_printer(stack, "a", min_ndx);
	return (min_ndx);
}