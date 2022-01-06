/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:04:06 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 19:41:11 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_bits(int m)
{
	int	count;

	count = 0;
	while (m)
	{
		count++;
		m >>= 1;
	}
	return (count);
}

void	ft_radix(t_node **head_ref_a, t_node **head_ref_b)
{
	t_node	*tmp;
	int		size;
	int		index;
	int		i;

	size = list_size(*head_ref_a);
	index = 0;
		i = 0;
	while (i < count_bits(find_big_digit(head_ref_a)))
	{
		index = 0;
		while (index < size)
		{
			tmp = (*head_ref_a);
			if ((((tmp->data) >> i) & 1) == 1)
				ft_rotate_a(head_ref_a);
			else if (ft_check_if_sorted(tmp) == 0)
				ft_push_b(head_ref_a, head_ref_b);
				index++;
		}
		send_to_a(head_ref_a, head_ref_b);
			i++;
	}
}
