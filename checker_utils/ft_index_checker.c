/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:33:01 by marvin            #+#    #+#             */
/*   Updated: 2021/12/30 19:33:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_index(t_node *head_ref, int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	ft_lilhak_sort(argv, argc);
	while (head_ref != NULL)
	{
			i = 1;
			j = 0;
		while (i < argc)
		{
			if (head_ref->data == ft_atoi(argv[i]))
			{
				head_ref->data = j;
				break ;
			}
			i++;
			j++;
		}
		head_ref = head_ref->next;
	}
}
