/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:05:52 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/24 20:19:39 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_sa(t_stack *stack_a)
{
	t_element	*temp;

	write(1, "sa\n", 3);
	temp = stack_a->array[stack_a->length - 1];
	stack_a->array[stack_a->length - 1] = stack_a->array[stack_a->length - 2];
	stack_a->array[stack_a->length - 2] = temp;
}

void	ps_sb(t_stack *stack_b)
{
	t_element	*temp;

	write(1, "sb\n", 3);
	if (stack_b->array[0] == NULL || stack_b->array[1] == NULL)
		return ;
	temp = stack_b->array[stack_b->length - 1];
	stack_b->array[stack_b->length - 1] = stack_b->array[stack_b->length - 2];
	stack_b->array[stack_b->length - 2] = temp;
}

void	ps_ss(t_stack *stack_a, t_stack *stack_b)
{
	ps_sa(stack_a);
	ps_sb(stack_b);
}
