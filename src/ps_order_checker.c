/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_order_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:29:26 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/27 19:32:54 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_num_is_repeated(t_stack *stack)
{
	int	c1;
	int	c2;
	int	already;

	c1 = 0;
	c2 = 0;
	while (c1 < stack->length)
	{
		c2 = 0;
		already = 0;
		while (c2 < stack->length)
		{
			if (stack->array[c2]->value == stack->array[c1]->value)
			{
				already++;
				if (already > 1)
					ps_errors("Error\n");
			}
			c2++;
		}
		c1++;
	}
}

int	ps_order_checker(t_stack *stack)
{
	int	is_in_order;
	int	counter;

	counter = stack->length - 1;
	is_in_order = 0;
	ps_num_is_repeated(stack);
	while (counter > 0)
	{
		if (stack->array[counter]->index > stack->array[counter - 1]->index)
		{
			return (0);
		}			
		counter--;
	}
	return (1);
}
