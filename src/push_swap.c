/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:03:22 by rabril-h          #+#    #+#             */
/*   Updated: 2022/08/05 19:45:16 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int i, char **params)
{
	ps_parser(i, params);
	ps_stacks_maker(i, params);
	// Insert stacks into game
	return (0);
}
