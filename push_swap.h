/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:24:23 by jroulet           #+#    #+#             */
/*   Updated: 2024/02/24 17:14:28 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdlib.h>

int		intchecker(char *number);
void	printerror(void);
void	lstcreator(int ac, char **av);
int		*tabint(int ac, char **av, int *len);
void	freetab(char **tab, int ac);
void    run_tests(void);
t_node	*ft_node_create_new(int value);
void	ft_node_insert_to_end(t_node **head, t_node *newnode);
void	ft_node_print_list(t_node *head);
int     ft_node_length(t_node *head);

void    pusha(t_node **stacka, t_node **stackb);
void    pushb(t_node **stacka, t_node **stackb);
void    push(t_node **src, t_node **dest);
void    rev(t_node **stack);
void    rra(t_node **stack);
void    rrb(t_node **stackb);
void    rrr(t_node **stacka, t_node **stackb);
void    swap(t_node *stack);
void    sa(t_node **stacka);
void    sb(t_node **stackb);
void    ss(t_node **stacka, t_node **stackb);
void    rotate(t_node **stack);
void    ra(t_node *stacka);
void    rb(t_node *stackb);
void    rr(t_node *stacka, t_node *stackb);
t_node  *getbottomnode(t_node *stack);

#endif
