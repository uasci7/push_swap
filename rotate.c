/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:00:32 by uasci             #+#    #+#             */
/*   Updated: 2023/07/24 18:00:35 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_swap	*index)
{
	int	temp;
	int	i;

	i = index->a_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_a[i];
		index->stack_a[i] = index->stack_a[i - 1];
		index->stack_a[i - 1] = temp;
	}
	write(1, "ra\n", 3);
}

void	rotate_b(t_swap	*index)
{
	int	temp;
	int	i;

	i = index->b_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_b[i];
		index->stack_b[i] = index->stack_b[i - 1];
		index->stack_b[i - 1] = temp;
	}
	write(1, "rb\n", 3);
}

void	rotate_r(t_swap	*index)
{
	int	temp;
	int	i;

	i = index->a_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_a[i];
		index->stack_a[i] = index->stack_a[i - 1];
		index->stack_a[i - 1] = temp;
	}
	i = index->b_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_b[i];
		index->stack_b[i] = index->stack_b[i - 1];
		index->stack_b[i - 1] = temp;
	}
	write(1, "rr\n", 3);
}
