/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:41:54 by cyril             #+#    #+#             */
/*   Updated: 2024/06/24 21:02:54 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include <unistd.h>  // For read(), write()
#include <stdlib.h>  // For malloc(), free(), exit()
#include <stdio.h>   // for printf
#include "libft.h"
#include "libftprintf.h"

#ifndef INT_MIN
#define INT_MIN (-2147483647 - 1)
#endif

#ifndef INT_MAX
#define INT_MAX 2147483647
#endif

typedef enum {
    false,
    true
} bool;

typedef struct node {
    int data;
    struct node* next;
    struct node* prev;
} node_t;

typedef struct move {
    int ra; // Shift up all elements of stack a by 1 - The first element becomes the last one.
    int rb;
	int rra; // Shift down all elements of stack a by 1 - The last element becomes the first one.
	int rrb;
} move_t;

node_t	*remove_node(node_t **head);
void	insert_node_tail(node_t **head, node_t *new_node);
node_t	*create_node(int data);
node_t	*parse_list(int argc, char	**argv);
void	ft_list_print(const node_t *node, char c);
void	ft_lstclear_circular(node_t **head);
void	ft_push(node_t **list_from, node_t **list_to, char c);
node_t	*ft_swap(node_t **head);
node_t	*ft_rotate(node_t **head);
node_t	*ft_reverse_rotate(node_t **head);
void	ft_dispatch_instruct(node_t **head_a, node_t **head_b, node_t * (instruction)(node_t **));
int		find_max(node_t *head);
int		find_antepenultimate_max(node_t *head, int max_index);
void	sort_three(node_t **head);
int		find_min(node_t *head);
int		find_antepenultimate_min(node_t *head, int min_index);
int		find_index_dec(node_t *head, int value);
int		find_index_inc(node_t *head, int value);
int		ft_list_size(node_t *node);
void	sort_list(node_t *head, int list_size);
bool	is_sorted(node_t *head);


#endif