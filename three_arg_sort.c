/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_arg_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:28:43 by saksoy            #+#    #+#             */
/*   Updated: 2023/07/31 21:07:23 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_swap *index)
{
	if (index->stack_a[index->a_len - 1] > index->stack_a[index->a_len - 2])
		swap_a(index);
	if (index->stack_a[index->a_len - 2]
		> index->stack_a[index->a_len - 3])
	{
		push_b(index);
		swap_a(index);
		push_a(index);
	}
	if (check_sorted_rdx(index) == 0)
		three_sort(index);
	if (index->b_len == 0)
		exit_swap(index);
}
