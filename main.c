/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:57:23 by uasci             #+#    #+#             */
/*   Updated: 2023/07/31 21:36:43 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_swap	*index;

	if (argc > 1)
	{
		index = init(argv);
		error_control(index);
		bg_sort_min(index);
		find_idx(index);
		one_arg(index);
		if (argc == 4)
			three_sort(index);
		else if (argc == 5)
			four_sort(index);
		else if (argc == 6)
			five_sort(index);
		radix_sort(index);
	}
	else
	{
		return (0);
	}
	exit_swap(index);
	return (0);
}
