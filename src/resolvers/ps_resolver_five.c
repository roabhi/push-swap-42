/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:20:54 by rabril-h          #+#    #+#             */
/*   Updated: 2022/09/21 17:14:09 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"




void	ps_resolver_five(t_stack *stack_a, t_stack *stack_b)
{
	
	// ft_putstr_fd("\n el numero menor es \n", 1);
	// ft_putnbr_fd(ps_min_finder(stack_a), 1);
	while (0 < stack_a->length - 3)
	{
		if (ps_min_finder(stack_a) == stack_a->length - 1)
		{
			ps_pb(stack_a, stack_b);			
		}
		else
		{
			ps_rra(stack_a);
		}
		// else if (ps_min_finder(stack_a) == stack_a->length - 2)
		// {
		// 	ps_sa(stack_a);
		// 	ps_pb(stack_a,stack_b);
		// }
		// else if(ps_min_finder(stack_a) == stack_a->length - 3)
		// {
		// 	if (stack_a->length > 4)
		// 		ps_rra(stack_a);
		// 	else
		// 	{
		// 		ps_rra(stack_a);
		// 		ps_rra(stack_a);
		// 	}			
		// 	ps_pb(stack_a, stack_b);
			
		// }
		// else if(ps_min_finder(stack_a) == 0)
		// {
		// 	// if (stack_a->length > 4)
		// 	// 	ps_rra(stack_a);
		// 	ps_rra(stack_a);
		// 	ps_pb(stack_a, stack_b);			
		// }
		// else 
		// {
		// 	write(1, "\n=========== fail ===============\n", 30);
		// 	ps_stack_printer(stack_a, "a");
		// 	ps_stack_printer(stack_b, "b");
		// 	exit(0);
		// }		
	}
	ps_resolver_three(stack_a);
	ps_pa(stack_a, stack_b);
	ps_pa(stack_a, stack_b);
	
	
	
	// ps_min_finder(stack_a);
	// if (ps_min_finder(stack_a))
		
	// ps_resolver_three(stack_a);
	// write(1,"el stack tiene 5 numeros \n",27);
	// while (0 < stack_b->length)
	// {
	// 	if (stack_b->array[stack_b->length - 1] > stack_a->array[stack_a->length - 1])
	// 	{
	// 		write(1, "top number in stack b is greater than top number from stack a", 61);
	// 		ps_pa(stack_a, stack_b);
	// 	}			
	// 	else if (stack_b->array[stack_b->length - 1] > stack_a->array[stack_a->length - 1] 
	// 		&& stack_b->array[stack_b->length - 2] 
	// 		> stack_a->array[stack_a->length - 2])
	// 		ps_res_five_1(stack_a, stack_b);
	// 	else 
	// 		write(1,"not maching\n", 13);
	// 	ft_putstr_fd("\nEl stack b tiene ", 1);
	// 	ft_putnbr_fd(stack_b->length, 1);
	// 	ft_putstr_fd(" numeros\n", 1);
	// }
	
}
 