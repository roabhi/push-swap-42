/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_min_max_finder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:43:41 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/27 18:43:43 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ps_max_finder(t_stack *stack)
{
	int	counter;
	int	max_ndx;

	max_ndx = 0;
	counter = 0;
	while (counter < stack->length -1)
	{
		if (stack->array[counter]->index > stack->array[max_ndx]->index)
			max_ndx = counter;
		counter++;
	}
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
		if (stack->array[counter]->index < stack->array[min_ndx]->index)
			min_ndx = counter;
		counter++;
	}
	return (min_ndx);
}
