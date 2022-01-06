/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:01:27 by mnaqqad           #+#    #+#             */
/*   Updated: 2022/01/06 11:17:08 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./checker_utils/get_next_line.h"

typedef struct node
{
	int			data;
	struct node	*next;
}t_node;

int		ft_atoi(const char *nptr);
void	free_list(t_node **head_ref);
int		ft_isdigit(int arg);
int		list_size(t_node *head);
void	push_back(t_node **head_ref, int x);
void	printlist(t_node *head);
int		ft_isalpha(char *chr);
int		ft_check_input(char **argv);
void	ft_swap_a(t_node **head_ref_a);
int		ft_check_dup(char **argv);
int		ft_check_if_sorted(t_node *head);
int		ft_isdigit_imp(char *arg);
void	ft_push_b(t_node **head_ref_a, t_node **head_ref_b);
void	push(t_node **head_ref, int x);
void	ft_rotate_a(t_node **head_ref_a);
t_node	*ft_lstlast(t_node *lst);
void	ft_swap_b(t_node **head_ref_b);
void	ft_push_a(t_node **head_ref_a, t_node **head_ref_b);
void	ft_rotate_b(t_node **head_ref_b);
void	ft_rr_c(t_node **head_ref_a, t_node **head_ref_b);
void	ft_rrr_c(t_node **head_ref_a, t_node **head_ref_b);
void	ft_reverse_rotate_a(t_node **head_ref_a);
void	ft_ss(t_node **head_ref_a, t_node **head_ref_b);
void	ft_reverse_rotate_b(t_node **head_ref_b);
void	ft_radix(t_node **head_ref_a, t_node **head_ref_b);
void	ft_lilhak_sort(char **arr, int size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_is_empty(char *arg);
void	small_handl(t_node **head_ref_a, t_node **head_ref_b);
void	bigech_handl(t_node **head_ref_a, t_node **head_ref_b);
void	ft_checker(t_node **head_ref_a, t_node **head_ref_b);
void	ft_index(t_node *head_ref, int argc, char **argv);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strstr(char *str, char *to_find);
void	ft_fill(char **argv, t_node **head_ref_a);
void	send_to_a(t_node **head_ref_a, t_node **head_ref_b);
int		find_big_digit(t_node **head_ref_a);
int		get_min_index(t_node **head_ref);
int		get_min(t_node **head_ref);
void	ft_less(t_node **head_ref_a, t_node **head_ref_b);
void	sort_separ(t_node **head_ref_a, t_node **head_ref_b);
void	ft_reverse_rotate_a_checker(t_node **head_ref_a);
void	ft_reverse_rotate_b_checker(t_node **head_ref_b);
void	ft_rotate_a_checker(t_node **head_ref_a);
void	ft_rotate_b_checker(t_node **head_ref_b);
#endif