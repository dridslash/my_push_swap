/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:40:26 by marvin            #+#    #+#             */
/*   Updated: 2022/01/01 13:40:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_to_a(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*tmp;
	int		index;
	int		size;

	tmp = (*head_ref_b);
	index = 0;
	size = list_size(tmp);
	while (index < size)
	{
		ft_push_a(head_ref_a, head_ref_b);
			index++;
	}
}
