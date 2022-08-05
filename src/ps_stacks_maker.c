/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stacks_maker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:04:14 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/05 19:48:00 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_stacks_maker(int i, char **params)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		counter;

	counter = 1;
	i--;
	//create stack a
	stack_a.array = malloc(sizeof(t_element *) * (i));
	if (!stack_a.array)
		exit(-1);
	stack_a.length = 0;
	while (counter <= i)
	{
		stack_a.array[counter - 1] = malloc(sizeof(t_element) * (i));
		stack_a.array[counter - 1]->value = ft_atoi(params[counter]);
		stack_a.length++;
		counter++;
	}
	// counter = 0;
	// while (counter < stack_a.length)
	// {
	// 	ft_putnbr_fd(stack_a.array[counter]->value, 1);
	// 	//write(1, "/", 1);
	// 	counter++;
	// }
	// write(1, "\n", 1);
	// ft_putstr_fd("El stack a tiene una longitud de ", 1);
	// ft_putnbr_fd(stack_a.length, 1);
	// write(1, "\n", 1);
	//create stack b
	stack_b.array = malloc(sizeof(t_element *) * stack_a.length);
	stack_b.length = 0;
	if (!stack_b.array)
		exit(-1);
	// ft_putstr_fd("El stack b tiene una longitud de ", 1);
	// ft_putnbr_fd(stack_b.length, 1);
	// write(1, "\n", 1);
	ps_pb(stack_a, stack_b);
}