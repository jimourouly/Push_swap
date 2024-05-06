/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <jroulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:04:47 by jroulet           #+#    #+#             */
/*   Updated: 2024/05/06 14:11:57 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node **head)
{
	t_node	*tmp;
	t_node	*bottom;

	if (!head || !(*head)->next)
		return ;
	tmp = *head;
	*head = (*head)->next;
	bottom = getbottomnode(*head);
	tmp->next = NULL;
	bottom->next = tmp;
}

//ascending all node in stack a
void	ra(t_node **stacka, t_node **stackb)
{
	rotate(stacka);
	ft_printf("\033[0;31m RA - all up in A\033[0m\n");
	ft_node_print_list(*stacka, 'a');
	ft_node_print_list(*stackb, 'b');
}

//ascending all node in stack b
void	rb(t_node **stackb)
{
	rotate(stackb);
	ft_printf("\033[0;31m RB - all up in B\033[0m\n");
}

//ascending all node in both stack
void	rr(t_node **stacka, t_node **stackb)
{
	ra(stacka, stackb);
	rb(stackb);
	ft_printf("\033[0;31m RR - all up in A and B\033[0m\n");
}
