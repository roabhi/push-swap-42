/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:30:33 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/20 22:35:06 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_resolver_three(t_stack *stack)
{
	ft_putstr_fd("\nEl stack tiene 3 numeros\n\n", 1);
	// ps_stack_printer(stack, "a");	

	if (stack->array[2]->index < stack->array[1]->index 
		&& stack->array[2]->index < stack->array[0]->index 
		&& stack->array[1]->index > stack->array[0]->index)
	{
		ft_putstr_fd("\nEl primer numero es el menor, el segundo debe ir despues del tercero\n", 1);
		ps_sa(stack);
		ps_ra(stack);
		
	}
	
	// ps_stack_printer(&game->stack_b, "b");

	
	// if (s[0] < s[1] && s[0] < s[2] && s[1] < s[2])
	// 	;
	// else if (s[0] < s[1] && s[0] < s[2] && s[1] > s[2])
	// {
	// 	rra(d);
	// 	sa(s);
	// }
	// else if (s[0] > s[1] && s[0] < s[2] && s[1] < s[2])
	// 	sa(s);
	// else if (s[0] < s[1] && s[0] > s[2] && s[1] > s[2])
	// 	rra(d);
	// else if (s[1] < s[2] && s[0] > s[1] && s[0] > s[2])
	// 	ra(d);
	// else if (s[1] > s[2] && s[0] > s[1] && s[0] > s[2])
	// {
	// 	ra(d);
	// 	sa(s);
	// }
}