/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:45:22 by saksoy            #+#    #+#             */
/*   Updated: 2023/07/31 22:10:23 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_swap	*index)
{
	int	temp;

	if (index->a_len < 2)
		return ;
	temp = index->stack_a[index->a_len - 1];
	index->stack_a[index->a_len - 1] = index->stack_a[index->a_len - 2];
	index->stack_a[index->a_len - 2] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_swap	*index)
{
	int	temp;

	if (index->b_len < 2)
		return ;
	temp = index->stack_b[index->b_len - 1];
	index->stack_b[index->b_len - 1] = index->stack_b[index->b_len - 2];
	index->stack_b[index->b_len - 2] = temp;
	write(1, "sb\n", 3);
}

void	swap_ss(t_swap	*index)
{
	int	temp;

	if (index->a_len < 2 || index->b_len < 2)
		return ;
	temp = index->stack_a[index->a_len - 1];
	index->stack_a[index->a_len - 1] = index->stack_a[index->a_len - 2];
	index->stack_a[index->a_len - 2] = temp;
	temp = index->stack_b[index->b_len - 1];
	index->stack_b[index->b_len - 1] = index->stack_b[index->b_len - 2];
	index->stack_b[index->b_len - 2] = temp;
	write(1, "ss\n", 3);
}
