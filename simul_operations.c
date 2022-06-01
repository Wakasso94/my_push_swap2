/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simul_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s < imaman-s@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:54:28 by imaman-s          #+#    #+#             */
/*   Updated: 2022/05/29 14:54:58 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, "rr");
	rotate(stack_b, "");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{	
	reverse_rotate(stack_a, "rrr");
	reverse_rotate(stack_b, "");
}

void	free_all(t_info *info, t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	t_list	*temp;

	i = 0;
	if (info->allocated > 0)
	{
		free(info->sorted_arr);
		free(info->not_sorted_arr);
	}
	while (stack_a->f_element)
	{
		temp = stack_a->f_element;
		stack_a->f_element = stack_a->f_element->next;
		free(temp);
	}
	if (stack_b->f_element)
		free(stack_b->f_element);
	while (info->argmnts && info->argmnts[i])
	{
		if (info->argmnts[i])
			free(info->argmnts[i]);
		i++;
	}
	if (info->argmnts)
		free (info->argmnts);
}

void	error(t_info *info, t_stack *stack_a, t_stack *stack_b)
{
	free_all(info, stack_a, stack_b);
	write (2, "Error\n", 6);
	exit (1);
}
