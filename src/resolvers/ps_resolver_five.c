/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:20:54 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/29 18:58:57 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_resolver_five(t_stack *stack_a, t_stack *stack_b)
{
	
	int c;

	c = 0;
	while (c < stack_a->length - 3)
		ps_pb(stack_a, stack_b);
	ps_resolver_three(stack_a);
	
}
 