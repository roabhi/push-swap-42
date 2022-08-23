/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:01:00 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/23 18:37:56 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <limits.h>

# include "libft.h"

typedef struct s_element {
	int	value;
	int	index;
}	t_element;

typedef struct s_stack {
	t_element	**array;
	int			length;
}	t_stack;

typedef struct s_game {
	t_stack	stack_a;
	t_stack	stack_b;
}	t_game;

void	ps_parser(int i, char **params);
void	ps_stacks_maker(int i, char **params, t_game *game);
int		ps_order_checker(t_stack *stack);
void	ps_errors(char *msg);
void	ps_sa(t_stack *stack_a);
void	ps_sb(t_stack *stack_b);
void	ps_ss(t_stack *stack_a, t_stack *stack_b);
void	ps_pa(t_stack *stack_a, t_stack *stack_b);
void	ps_pb(t_stack *stack_a, t_stack *stack_b);
void	ps_ra(t_stack *stack_a);
void	ps_rb(t_stack *stack_b);
void	ps_rr(t_stack *stack_a, t_stack *stack_b);
void	ps_rra(t_stack *stack_a);
void	ps_rrb(t_stack *stack_b);
void	ps_rrr(t_stack *stack_a, t_stack *stack_b);
void	ps_stack_printer(t_stack *stack, char *name);
void	ps_element_printer(t_stack *stack, char *name, int index);
int		ps_min_finder(t_stack *stack);
int		ps_max_finder(t_stack *stack);
void	ps_resolver_two(t_stack *stack);
void	ps_resolver_three(t_stack *stack);
void	ps_resolver_five(t_stack *stack_a, t_stack *stack_b);

#endif
