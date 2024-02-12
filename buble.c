/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:58:24 by uasci             #+#    #+#             */
/*   Updated: 2023/07/25 17:38:54 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bg_sort_min(t_swap *index)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	len = index->a_len;
	while (i < len)
	{
		index->sorted[i] = index->stack_a[i];
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		if (index->sorted[i] > index->sorted[i + 1])
		{
			temp = index->sorted[i];
			index->sorted[i] = index->sorted[i + 1];
			index->sorted[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}
