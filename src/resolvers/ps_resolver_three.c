/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:30:33 by rabril-h          #+#    #+#             */
/*   Updated: 2022/09/21 17:26:06 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_resolver_three(t_stack *stack)
{
	// ft_putstr_fd("\nEl stack tiene 3 numeros\n\n", 1);
	if (stack->array[2]->index < stack->array[1]->index 
		&& stack->array[2]->index < stack->array[0]->index 
		&& stack->array[1]->index > stack->array[0]->index)
	{
		// ft_putstr_fd("\nEl primer numero es el menor, el segundo debe ir despues del tercero\n", 1);
		ps_sa(stack);
		ps_ra(stack);		
	}else if (stack->array[0]->index > stack->array[1]->index
		&& stack->array[0]->index > stack->array[2]->index
		&& stack->array[1]->index < stack->array[2]->index)
	{
		// ft_putstr_fd("\nEl primer numero es el mayor que el segundo pero menor que el tercero\n", 1);
		ps_sa(stack);
	}else if (stack->array[0]->index < stack->array[1]->index
		&& stack->array[0]->index < stack->array[2]->index
		&& stack->array[1]->index < stack->array[2]->index)
	{
		// ft_putstr_fd("\nEl stack esta justo al reves\n", 1);
		ps_sa(stack);
		ps_rra(stack);
	}else if (stack->array[0]->index > stack->array[1]->index
		&& stack->array[0]->index < stack->array[2]->index
		&& stack->array[1]->index < stack->array[2]->index)
	{
		// ft_putstr_fd("\n El numero de en mdeio debe ir el primero \n", 1);
		ps_ra(stack);
	}else if (stack->array[0]->index < stack->array[1]->index 
		&& stack->array[0]->index < stack->array[2]->index 
		&& stack->array[1]->index > stack->array[2]->index)
	{
		// ft_putstr_fd("\n El ultimo numero debe ir el primero \n", 1);
		ps_rra(stack);	
	}
}