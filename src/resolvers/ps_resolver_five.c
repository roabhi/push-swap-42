/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:20:54 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/23 20:32:41 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_mins_to_b(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_b;
	if (stack_a->array[stack_a->length - 1]->index == 0 || stack_a->array[stack_a->length - 1]->index == 1)
	{
		ps_element_printer(stack_a, "a", stack_a->array[stack_a->length - 1]->index);
	}
	// ps_mins_to_b(stack_a, stack_b);
}

void	ps_resolver_five(t_stack *stack_a, t_stack *stack_b)
{
	
	// int min_ndx;
	// int max_ndx;
	
	ft_putstr_fd("\nEl stack tiene 5 números \n", 1);

	
	
	ps_mins_to_b(stack_a, stack_b);

	// min_ndx = ps_min_finder(stack_a);
	// max_ndx = ps_max_finder(stack_a);

	// ft_putstr_fd("\nEl numero menor es ", 1);
	// ps_element_printer(stack_a, "a", min_ndx);
	// ft_putstr_fd("\nEl numero mayor es ", 1);
	// ps_element_printer(stack_a, "a", max_ndx);

	// ps_pb(stack_a, stack_b);
	// ps_pb(stack_a, stack_b);
	// ps_resolver_three(stack_a);
	// ps_resolver_two(stack_b);
	// ps_sa(stack_a);
	// ps_ra(stack_a);
	// ps_pa(stack_a, stack_b);
	// ps_ra(stack_a);
	// ps_pa(stack_a, stack_b);
}
