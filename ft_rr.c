/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:49:58 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/05 18:30:26 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr_c(t_node **head_ref_a, t_node **head_ref_b)
{
	ft_rotate_a_checker(head_ref_a);
	ft_rotate_b_checker(head_ref_b);
	write(1, "rr\n", 3);
}
