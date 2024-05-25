/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <jroulet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:23:59 by jroulet           #+#    #+#             */
/*   Updated: 2024/05/25 13:32:40 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <limits.h>

void	printerror(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

int	main(int ac, char **av)
{
	int		*inttab;
	int		i;
	t_node	*temp;
	t_node	*head;
	int		len;

	head = NULL;
	if (ac == 1)
	{
		return (0);
	}
	else
	{
		inttab = tabint (ac, av, &len);
		if (!inttab)
			printerror();
		i = 0;
		while (i < len)
		{
			temp = ft_node_create_new(inttab[i]);
			temp->next = NULL;
			ft_node_insert_to_end(&head, temp);
			i++;
		}
	}
	if (sortedlist(head))
		ft_printf("listsorted\n");
	else
	{
		if (ft_node_length(head) == 2)
			sa(&head);
		else if (ft_node_length(head) == 3)
			tinysort(&head);
		else if (ft_node_length(head) <= 5)
			sortfive(&head);
		else
			bigsort(head);
	}
	free(inttab);
	freelink(head);
}


