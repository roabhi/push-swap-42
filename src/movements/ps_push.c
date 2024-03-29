/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:49:35 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/27 18:49:37 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_pb(t_stack *stack_a, t_stack *stack_b)
{
	write(1, "pb\n", 3);
	if (stack_a->array[0] == NULL)
		return ;
	stack_b->array[stack_b->length] = stack_a->array[stack_a->length - 1];
	stack_a->length--;
	stack_b->length++;
}

void	ps_pa(t_stack *stack_a, t_stack *stack_b)
{
	write(1, "pa\n", 3);
	if (stack_b->array[0] == NULL)
		return ;
	stack_a->array[stack_a->length] = stack_b->array[stack_b->length - 1];
	stack_b->length--;
	stack_a->length++;
}
