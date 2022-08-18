/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:03:22 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/18 18:46:40 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_algo_checker(t_game *game)
{	
	if (game->stack_a.length == 1)
		ps_errors("");
	else if (game->stack_a.length == 2)
	{
		// ft_putstr_fd("\nEl stack tiene 2 numeros", 1);
		ps_stack_printer(&game->stack_a, "a");
		ps_sa(&game->stack_a);
		ps_stack_printer(&game->stack_a, "a");
	}
	else if (game->stack_a.length == 3)
	{
		ps_resolver_three(game);
	}else if (game->stack_a.length == 4)
	{
		ft_putstr_fd("\nEl stack tiene 4 numeros", 1);
	}

}

int	main(int i, char **params)
{
	t_game	game;
	
	ps_parser(i, params);
	ps_stacks_maker(i, params, &game);	
	if (ps_order_checker(&game.stack_a))
		ps_errors("");
	ps_algo_checker(&game);
	// ps_pb(&game.stack_a, &game.stack_b);
	// ps_pb(&game.stack_a, &game.stack_b);
	// ps_pb(&game.stack_a, &game.stack_b);
	// //ps_rb(&game.stack_a);
	// ps_rrb(&game.stack_b);
	// ps_stack_printer(&game.stack_a, "a");
	// ps_stack_printer(&game.stack_b, "b");
	return (0);
}
