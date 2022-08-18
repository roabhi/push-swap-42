/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:30:33 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/18 18:45:47 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_resolver_three(t_game *game)
{
	ft_putstr_fd("\nEl stack tiene 3 numeros", 1);
	ps_stack_printer(&game->stack_a, "a");	

	if (game->stack_a.array[0]->index < game->stack_a.array[1]->index && game->stack_a.array[0]->index < game->stack_a.array[2]->index && game->stack_a.array[1]->index > game->stack_a.array[2]->index)
	{
		ps_sa(&game->stack_a);
		
		// ps_rra(&game->stack_a);
		ps_stack_printer(&game->stack_a, "a");		
		
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