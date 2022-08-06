/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_element_printer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:02:14 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/06 19:12:30 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ps_element_printer(t_stack *stack, char *name, int index)
{
	write(1, "\n--------------------\n", 22);
	ft_putstr_fd("El elemento ", 1);
	ft_putnbr_fd(index, 1);
	ft_putstr_fd(" del stack ", 1);
	ft_putstr_fd(name, 1);
	ft_putstr_fd(" es -> ", 1);
	ft_putnbr_fd(stack->array[index]->value, 1);
	write(1, "\n\n", 2);
}