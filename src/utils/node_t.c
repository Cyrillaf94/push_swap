/* ************************************************************************** */
/*																			*/
/*		                                                :::      ::::::::   */
/*   push_swap_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyril <cyril@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:51:28 by cyril             #+#    #+#             */
/*   Updated: 2024/04/01 18:05:06 by cyril            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node_t	*create_node(int data) 
{
    node_t* new_node;
	new_node = (node_t*)malloc(sizeof(node_t));
	if (new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	return new_node;
}

void	insert_node_tail(node_t **head, node_t *new_node)
{
	node_t *tail;

	if (!(*head))
	{
		*head = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		tail = (*head)->prev;
		tail->next = new_node;
		new_node->prev = tail;
		new_node->next = *head;
		(*head)->prev = new_node;
	}
}
// Remove a node from the list, return the pointer to that node, 
// nullify the pointer of pointer if list is empty
node_t	*remove_node(node_t **node)
{
	node_t	*temp;
	
	if (!node || !*node)
		return (NULL);
	temp = *node;
	if ((*node)->next == *node)
	{
		temp = *node;
		*node = NULL;
		return (temp);
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	temp->next = temp->prev = NULL;
	return (temp);
}

int	ft_list_size(node_t *node)
{
	int	i;
	node_t*	current;

	i = 0;
	current = node;
	while (current && (i==0 || current != node))
	{
		i++;
		current = current->next;
	}
	return (i);
}

void	ft_lstclear_circular(node_t **head)
{
	node_t	*current;
	
	if (head && *head)
	{
		current = *head;
		current->prev->next = NULL;
		while (current->next)
		{
			current = current->next;
			free(current->prev);
		}
		free(current);
		*head = NULL;
	}
}

