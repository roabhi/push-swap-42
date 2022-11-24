/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:03:22 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/24 20:20:01 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_liberator(t_game *game)
{
	int	counter;
	
	counter = 0;
	while (counter <= game->stack_a.length - 1)
	{
		free(game->stack_a.array[counter]);
		counter++;
	}
	free(game->stack_a.array);
	free(game->stack_b.array);
}

void	ps_short_sort(t_game *game)
{
	if (game->stack_a.length == 1)
		ps_errors("");
	else if (game->stack_a.length == 2)
	{
		ps_resolver_two(&game->stack_a);
		ps_liberator(game);
	}
	else if (game->stack_a.length == 3)
	{
		ps_resolver_three(&game->stack_a);
		ps_liberator(game);
	}
	else if (game->stack_a.length == 4)
	{
		ps_resolver_four(&game->stack_a, &game->stack_b);
		ps_liberator(game);
	}
	else if (game->stack_a.length == 5)
	{
		ps_resolver_five(&game->stack_a, &game->stack_b);
		ps_liberator(game);
	}
}

void	ps_algo_checker(t_game *game)
{	
	int	chunks;
	
	if (game->stack_a.length <= 5)
		ps_short_sort(game);
	else
	{
		if (game->stack_a.length <= 100)
			chunks = 5;
		else
			chunks = 8;
		ps_big_resolver(game, chunks);
		ps_liberator(game);
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
	return (0);
}
