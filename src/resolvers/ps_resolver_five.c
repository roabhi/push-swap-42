/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:00:03 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/27 19:00:06 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_resolver_five(t_stack *stack_a, t_stack *stack_b)
{
	while (0 < stack_a->length - 3)
	{
		if (ps_min_finder(stack_a) == stack_a->length - 1)
			ps_pb(stack_a, stack_b);
		else if (ps_min_finder(stack_a) == 0)
			ps_rra(stack_a);
		else
			ps_ra(stack_a);
	}
	ps_resolver_three(stack_a);
	ps_pa(stack_a, stack_b);
	ps_pa(stack_a, stack_b);
}
