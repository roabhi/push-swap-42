/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:51:19 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/06 18:29:55 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_pb(t_stack *stack_a, t_stack *stack_b)
{
	//t_element *temp;

	write(1, "ps", 2);
	
	// ps_stack_printer(stack_a, "a");
	// ps_stack_printer(stack_b, "b");
	if (stack_a->array[0] == NULL)
		return;
	stack_b->array[0] = stack_a->array[0];
	stack_a->length--;
	stack_b->length++;	

	// ps_stack_printer(stack_a, "a");
	// ps_stack_printer(stack_b, "b");
}