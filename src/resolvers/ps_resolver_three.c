/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:30:33 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/24 19:46:37 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_resolver_three_extra(t_stack *stack)
{
	if (stack->array[0]->index > stack->array[1]->index
		&& stack->array[0]->index < stack->array[2]->index
		&& stack->array[1]->index < stack->array[2]->index)
	{
		ps_ra(stack);
	}
	else if (stack->array[0]->index < stack->array[1]->index 
		&& stack->array[0]->index < stack->array[2]->index 
		&& stack->array[1]->index > stack->array[2]->index)
	{
		ps_rra(stack);
	}
}

void	ps_resolver_three(t_stack *stack)
{
	if (stack->array[2]->index < stack->array[1]->index 
		&& stack->array[2]->index < stack->array[0]->index 
		&& stack->array[1]->index > stack->array[0]->index)
	{
		ps_sa(stack);
		ps_ra(stack);
	}
	else if (stack->array[0]->index > stack->array[1]->index
		&& stack->array[0]->index > stack->array[2]->index
		&& stack->array[1]->index < stack->array[2]->index)
	{
		ps_sa(stack);
	}
	else if (stack->array[0]->index < stack->array[1]->index
		&& stack->array[0]->index < stack->array[2]->index
		&& stack->array[1]->index < stack->array[2]->index)
	{
		ps_sa(stack);
		ps_rra(stack);
	}
	else
		ps_resolver_three_extra(stack);
}