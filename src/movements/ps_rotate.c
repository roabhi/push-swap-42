/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:08:13 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/12 22:29:00 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_ra(t_stack *stack_a)
{
	t_element	*temp;

	write(1, "ra\n\n", 5);
	temp = stack_a->array[stack_a->length - 1];
	stack_a->array[stack_a->length - 1] = stack_a->array[0];
	stack_a->array[0] = temp;

}

void	ps_rb(t_stack *stack_b)
{
	t_element	*temp;

	write(1, "rb\n\n", 5);
	temp = stack_b->array[stack_b->length - 1];
	stack_b->array[stack_b->length - 1] = stack_b->array[0];
	stack_b->array[0] = temp;

}

void	ps_rr(t_stack *stack_a, t_stack *stack_b)
{
	ps_ra(stack_a);
	ps_rb(stack_b);
}