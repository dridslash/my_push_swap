/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:52:15 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 20:04:31 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr_c(t_node **head_ref_a, t_node **head_ref_b)
{
	ft_reverse_rotate_a_checker(head_ref_a);
	ft_reverse_rotate_b_checker(head_ref_b);
}
