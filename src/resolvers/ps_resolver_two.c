/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_resolver_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:42:31 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/23 17:50:07 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    ps_resolver_two(t_stack *stack)
{
    // ft_putstr_fd("\nEl stack tiene 2 numeros\n", 1);
    if (stack->array[0]->index < stack->array[1]->index)
        ps_sa(stack);
}