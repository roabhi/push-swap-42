/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:03:22 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/09 19:11:47 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int i, char **params)
{
	t_game	game;
	
	ps_parser(i, params);
	ps_stacks_maker(i, params, &game);	
	ps_stack_printer(&game.stack_a, "a");
	ps_pb(&game.stack_a, &game.stack_b);
	ps_pb(&game.stack_a, &game.stack_b);
	ps_rb(&game.stack_a);
	ps_stack_printer(&game.stack_a, "a");
	ps_stack_printer(&game.stack_b, "b");
	return (0);
}
