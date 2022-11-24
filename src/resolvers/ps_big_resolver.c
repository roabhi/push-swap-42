/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_big_resolver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:25:42 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/24 20:17:54 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	smart_rotate_best_dir(t_stack *stack, int search_num)
{
	int	count;
	int	pos;
	
	count = stack->length - 1;
	pos = 0;
	while (count >= 0)
	{
		if (stack->array[count]->index == search_num)
			pos = count;
		count--;
	}
	if (search_num == pos)
	{
		return (0);
	}
	else if (pos > stack->length / 2)
	{
		return (1);
	}
	return (2);
}

void	smart_put_number_in_top_extra(t_game *game, int search_num)
{
	while (game->stack_b.array[game->stack_b.length - 1]->index != search_num)
	{
		if (game->stack_b.array[game->stack_b.length - 1]->index
			== search_num - 1)
		{
			ps_pa(&game->stack_a, &game->stack_b);
		}
		else
			ps_rrb(&game->stack_b);
	}	
}

void	smart_put_number_in_top(t_game *game, int search_num)
{
	int	dir;

	dir = smart_rotate_best_dir(&game->stack_b, search_num);
	if (dir == 1)
	{
		while (game->stack_b.array[game->stack_b.length - 1]->index
			!= search_num)
		{
			if (game->stack_b.array[game->stack_b.length - 1]->index
				== search_num - 1)
			{
				ps_pa(&game->stack_a, &game->stack_b);
			}
			else
				ps_rb(&game->stack_b);
		}
	}
	else if (dir == 2)
		smart_put_number_in_top_extra(game, search_num);
	ps_pa(&game->stack_a, &game->stack_b);
}

void	ps_big_resolver_extra(t_game *game, int limit)
{
	int	c2;
	
	c2 = 0;
	while (c2 < limit)
	{
		if (game->stack_a.array[game->stack_a.length - 1]->index < limit)
		{
			ps_pb(&game->stack_a, &game->stack_b);
			if (game->stack_b.array[game->stack_b.length - 1]->index
				< limit / 2)
				ps_rb(&game->stack_b);
			c2++;
		}
		else
			ps_ra(&game->stack_a);
	}
	ps_stack_orderer(&game->stack_a);
}

void	ps_big_resolver(t_game *game, int chunks)
{
	int	c1;
	int	limit;
	int	s_length;

	c1 = 1;
	s_length = game->stack_a.length - 1;
	limit = game->stack_a.length / chunks;
	while (c1 <= chunks)
	{
		ps_big_resolver_extra(game, limit);
		c1++;
	}
	ps_stack_cleaner(game);
	ps_stack_orderer(&game->stack_b);
	while (s_length >= 0)
	{
		if (game->stack_a.length >= 2
			&& game->stack_a.array[game->stack_a.length - 2]->index
			== s_length)
			ps_sa(&game->stack_a);
		else
			smart_put_number_in_top(game, s_length);				
		s_length--;
	}
}