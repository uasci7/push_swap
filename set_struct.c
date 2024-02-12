/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:00:48 by uasci             #+#    #+#             */
/*   Updated: 2023/07/27 13:30:11 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*get_argv(char **argv)
{
	char	**splitted;
	char	*ret;
	char	*old;
	int		i;
	int		j;

	i = 0;
	ret = ft_calloc(2023, sizeof(char *));
	while (argv[++i])
	{
		splitted = ft_split(argv[i], ' ');
		j = -1;
		while (splitted[++j])
		{
			old = ret;
			ret = ft_strjoin(ret, splitted[j]);
			free(old);
			old = ret;
			ret = ft_strjoin(ret, " ");
			free(old);
		}
		free_list(splitted);
	}
	return (ret);
}

static void	nbr_cntrl(char *str, t_swap *index)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		if (!str[i])
			break ;
		if (!(str[i] >= '0' && str[i] <= '9') && (str[i] != ' ') && str[i])
		{
			write(2, "Error\n", 6);
			exit_swap(index);
		}
	}
}

void	set_values(char *str, t_swap *index)
{
	char	**spt;
	int		i;
	int		j;

	spt = ft_split(str, ' ');
	i = 0;
	while (i < index->a_len)
	{
		nbr_cntrl(spt[i++], index);
	}
	i = 0;
	j = -1;
	while (spt[i])
		i++;
	while (spt[--i] && i >= 0)
	{
		if (ft_atol(spt[i], index) > 2147483647
			|| ft_atol(spt[i], index) < -2147483648)
		{
			write(2, "Error\n", 6);
			exit_swap(index);
		}
		index->stack_a[++j] = ft_atoi(spt[i]);
	}
	free_list(spt);
}
