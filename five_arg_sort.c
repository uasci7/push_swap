/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_arg_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:58:35 by uasci             #+#    #+#             */
/*   Updated: 2023/07/24 17:59:30 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	finder2(t_swap	*index)
{
	int	i;

	i = 1;
	while (i)
	{
		if (index->stack_a[index->a_len - i] == 0)
			return (i);
		i++;
	}
	return (0);
}

void	five_sort(t_swap *index)
{
	int	i;
	int	place;

	i = 0;
	place = finder2(index);
	while (i < index->a_len)
	{
		if (index->stack_a[index->a_len - 1] == 0)
		{
			push_b(index);
			four_sort(index);
			push_a(index);
			break ;
		}
		++i;
		if (place <= 2)
			rotate_a(index);
		else
			reverse_rotate_a(index);
	}
	exit_swap(index);
}
