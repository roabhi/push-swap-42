/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stacks_maker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:04:14 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/27 19:39:12 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_stack_orderer(t_stack *stack)
{
	int	c1;
	int	c2;
	int	ndx;

	c1 = 0;
	c2 = 0;
	ndx = 0;
	while (c1 < stack->length)
	{
		c2 = 0;
		ndx = 0;
		while (c2 < stack->length)
		{
			if (stack->array[c2]->value < stack->array[c1]->value)
				ndx++;
			c2++;
		}
		stack->array[c1]->index = ndx;
		c1++;
	}
}

void	ps_stacks_maker_extra(t_stack stack_a, t_stack stack_b, t_game *game)
{
	game->stack_a = stack_a;
	game->stack_b = stack_b;
	ps_stack_orderer(&stack_a);
}

void	ps_stacks_maker(int i, char **params, t_game *game)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		counter;

	i--;
	counter = 0;
	stack_a.array = malloc(sizeof(t_element *) * (i));
	if (!stack_a.array)
		exit(-1);
	stack_a.length = 0;
	while (i >= 1)
	{		
		stack_a.array[counter] = malloc(sizeof(t_element) * 1);
		stack_a.array[counter]->value = ft_atoi(params[i]);
		stack_a.length++;
		counter++;
		i--;
	}
	stack_b.array = malloc(sizeof(t_element *) * stack_a.length);
	stack_b.array[0] = NULL;
	stack_b.length = 0;
	if (!stack_b.array)
		exit(-1);
	ps_stacks_maker_extra(stack_a, stack_b, game);
}
