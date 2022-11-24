/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_cleaner.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:01:38 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/24 19:35:02 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_stack_cleaner(t_game *game)
{
	while (game->stack_a.length)
	{
		ps_pb(&game->stack_a, &game->stack_b);
	}
}