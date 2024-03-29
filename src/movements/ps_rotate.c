/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:51:44 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/27 18:51:46 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_ra(t_stack *stack_a)
{
	t_element	*temp;
	int			counter;

	write(1, "ra\n", 3);
	counter = stack_a->length - 1;
	temp = stack_a->array[stack_a->length - 1];
	while (counter > 0)
	{
		stack_a->array[counter] = stack_a->array[counter - 1];
		counter--;
	}
	stack_a->array[0] = temp;
}

void	ps_rb(t_stack *stack_b)
{
	t_element	*temp;
	int			counter;

	write(1, "rb\n", 3);
	counter = stack_b->length - 1;
	temp = stack_b->array[stack_b->length - 1];
	while (counter > 0)
	{
		stack_b->array[counter] = stack_b->array[counter - 1];
		counter--;
	}
	stack_b->array[0] = temp;
}

void	ps_rr(t_stack *stack_a, t_stack *stack_b)
{
	ps_ra(stack_a);
	ps_rb(stack_b);
}
