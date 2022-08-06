/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:01:00 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/06 18:48:09 by rabril-h         ###   ########.fr       */
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
	t_stack stack_b;
}	t_game;

void	ps_parser(int i, char **params);
void	ps_stacks_maker(int i, char **params, t_game *game);
void	ps_errors(char *msg);
void	ps_pb(t_stack *stack_a, t_stack *stack_b);
void	ps_stack_printer(t_stack *stack, char *name);
void	ps_element_printer(t_stack *stack, char *name, int index);

#endif
