/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:51:19 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/14 16:22:51 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_pb(t_stack *stack_a, t_stack *stack_b)
{
	write(1, "pb\n\n", 5);
	if (stack_a->array[0] == NULL)
		return;
	stack_b->array[stack_b->length] = stack_a->array[stack_a->length - 1];
	stack_a->length--;
	stack_b->length++;
}

void	ps_pa(t_stack *stack_a, t_stack *stack_b)
{
	write(1, "pa\n\n", 2);
	if (stack_b->array[0] == NULL)
		return;
	stack_a->array[stack_a->length] = stack_b->array[stack_b->length - 1];
	stack_b->length--;
	stack_a->length++;
}