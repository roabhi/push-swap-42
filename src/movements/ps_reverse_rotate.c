/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:17:12 by rabril-h          #+#    #+#             */
/*   Updated: 2022/09/21 17:16:04 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_rra(t_stack *stack_a)
{
	t_element	*temp;
	int			counter;

	write(1, "\nrra\n\n", 5);
	temp = stack_a->array[0];
	counter = 0;
	while (counter < stack_a->length - 1)
	{
		stack_a->array[counter] = stack_a->array[counter + 1];
		counter++;
	}	
	stack_a->array[stack_a->length - 1] = temp;
}

void	ps_rrb(t_stack *stack_b)
{
	t_element	*temp;
	int			counter;

	write(1, "\nrrb\n\n", 5);
	temp = stack_b->array[0];
	counter = 0;
	while (counter < stack_b->length - 1)
	{
		stack_b->array[counter] = stack_b->array[counter + 1];
		counter++;
	}	
	stack_b->array[stack_b->length - 1] = temp;
}

void	ps_rrr(t_stack *stack_a, t_stack *stack_b)
{
	ps_rra(stack_a);
	ps_rrb(stack_b);
}